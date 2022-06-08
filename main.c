

/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdlib.h"
#include "cyapicallbacks.h"


void updateLoad(void);
void loadWrite(uint8,uint8);
void HandleError(void);
void i2cReceive(void);

#define LightloadNumber 4
#define FanLoadNumber 1

uint8 state_switch[LightloadNumber];       //status of touch switch
uint8 pre_switch[LightloadNumber];         //previous status of touch switch
uint8 state_load[LightloadNumber];         //status of load
uint8 state[LightloadNumber + FanLoadNumber + 1];   //state for communication 
uint8 pre_state[LightloadNumber + FanLoadNumber + 1];   //state for communication 
uint8 state_Fswitch[FanLoadNumber];   //status of fan switch
uint8 pre_Fswitch[FanLoadNumber];    //previous status of fan switch
uint8 fan_state[2];
uint8 state_Fan[FanLoadNumber];    //status of fan regulator

uint8 Switch[] = {0,1,2,3};   // touch swich for light load(cap sense button 0,1,2,3)
uint8 Load[] = {0,1,2,3};  //load connection for switch (L0,L1,L2,L3)(relay)
uint8 F_UP_DWN[2] = {5,4}; //fan up and down touch switch(cap sense button 5,6)
uint8 Fan[4] = {7,6,5,4};  //fan output connection(L4,L5,L6,L7)
uint8 Fan_led[5] = {12,11,10,9,8}; // fan speed indicator led(L8,L9,L10,L11,L12)
uint8 white_led_load[] = {13,14,15,16}; //white led for each load(L13,L14,L15,L16)
uint8 Fan_UDW[2] = {18,17};  //fan up down white led
uint8 Fan_UDB[2] = {22,21};  //fan up down blue led

// smd button down
/*
uint8 F_switch[] = {6}; //fan touch switch (cap sense button 4)
uint8 Fan_BW[2] = {20,19};   //fan blue and white led 
uint8 Scenebut = {7};  //touch switch for smd pad(cap sense button 7)
uint8 scene_BW[2] = {23,24};  //smd switch up down blue led
*/
// smd button up
uint8 F_switch[] = {7}; //fan touch switch (cap sense button 4)
uint8 Fan_BW[2] = {24,23};   //fan blue and white led 
uint8 Scenebut = {6};  //touch switch for smd pad(cap sense button 7)
uint8 scene_BW[2] = {19,20};  //smd switch up down blue led

uint8 ScenebutStatus = 0;
uint8 pre_ScenebutStatus = 0;
uint8 whiteLed = 1;      //status of activation of white led of all loads
 
//i2c
uint8 i2cReadBuffer[(LightloadNumber + FanLoadNumber + 1)];
uint8 i2cWriteBuffer[(LightloadNumber + FanLoadNumber + 1)];
uint8 I2CFlag = 0u;

uint8 sceneled = 0;
uint8 speed = 0;
int onOffFlag = 0;

uint8 flag = 0;

void I2C_I2C_ISR_ExitCallback()
{
    I2CFlag = 1; 
}

int main(void)
{
    memset(state_switch,0,sizeof(state_switch));
    memset(pre_switch,0,sizeof(pre_switch));
    memset(state,0,sizeof(state));
    memset(state_load,0,sizeof(state_load));
    memset(pre_state,0,sizeof(pre_state));
    memset(state_Fswitch,0,sizeof(state_Fswitch));
    memset(pre_Fswitch,0,sizeof(pre_Fswitch));
    memset(fan_state,0,sizeof(fan_state));
    memset(i2cReadBuffer,0,sizeof(i2cReadBuffer));  
    
    L13_Write(whiteLed);
    L14_Write(whiteLed);
    L15_Write(whiteLed);
    L16_Write(whiteLed);
    L17_Write(whiteLed);
    L18_Write(whiteLed);
    L19_Write(whiteLed);
    L23_Write(whiteLed);
      
    I2C_I2CSlaveInitReadBuf(i2cReadBuffer, (LightloadNumber + FanLoadNumber + 1));
    I2C_I2CSlaveInitWriteBuf(i2cWriteBuffer, (LightloadNumber + FanLoadNumber + 1));
    
    I2C_I2C_ISR_ExitCallback();
    
    CyGlobalIntEnable; 
    
    CySysWdtWriteMode(CY_SYS_WDT_COUNTER1, CY_SYS_WDT_MODE_RESET);
    CySysWdtWriteMatch(CY_SYS_WDT_COUNTER1, 0xFA00);
      
    CySysWdtWriteClearOnMatch(CY_SYS_WDT_COUNTER1, 1u);
    
    CySysWdtEnable(CY_SYS_WDT_COUNTER1_MASK);
    
    CapSense_1_Start();
    CapSense_1_InitializeAllBaselines();
    I2C_Start();
    
    for(;;)
    {
        if(0u == CapSense_1_IsBusy()){
            /* Update all baselines */
            CapSense_1_ProcessAllWidgets();
           
            /* Start scanning all enabled sensors */
            CapSense_1_ScanAllWidgets();
        }
        
        ScenebutStatus = CapSense_1_IsWidgetActive(Scenebut);
        if(ScenebutStatus != pre_ScenebutStatus){
            if(ScenebutStatus != 0 && onOffFlag == 0){
                onOffFlag = 1;
                for(int i = 0; i < LightloadNumber+FanLoadNumber; i++){
                    if(i<LightloadNumber)
                        loadWrite(Load[i],0);
                    state[i] = 0;
                }
                loadWrite(Fan_BW[0],0);
                if(whiteLed == 1){
                    for(int i = 0; i < LightloadNumber; i++){
                        loadWrite(white_led_load[i],1);
                    }
                    loadWrite(Fan_BW[1],1);
                }
            }
            else if(ScenebutStatus != 0 && onOffFlag == 1){
                onOffFlag = 0;
                for(int i = 0; i < LightloadNumber+FanLoadNumber; i++){
                    if(i<LightloadNumber)
                        loadWrite(Load[i],1);
                    state[i] = 1;
                }
                loadWrite(Fan_BW[0],1);
                if(whiteLed == 1){
                    for(int i = 0; i < LightloadNumber; i++){
                        loadWrite(white_led_load[i],0);
                    }
                    loadWrite(Fan_BW[1],0);
                }
            }
            pre_ScenebutStatus = ScenebutStatus;
        }
        
        if(state[0] != 1 && state[1] != 1 && state[2] != 1 && state[3] != 1 && state[4] != 1){    
            onOffFlag = 1;
        }
        else {
            onOffFlag = 0;
        }
        if(state[0] == 1 && state[1] == 1 && state[2] == 1 && state[3] == 1 && state[4] == 1){
            if(whiteLed == 1)
                loadWrite(scene_BW[0],0);
            loadWrite(scene_BW[1],1);           
        }
        else {
            if(whiteLed == 1)
                loadWrite(scene_BW[0],1);
            loadWrite(scene_BW[1],0);
        }
        
        
        for(uint8 i = 0 ; i < LightloadNumber ; i++){                    
           state_switch[i] = CapSense_1_IsWidgetActive(Switch[i]);
            if(state_switch[i] != pre_switch[i]){                         
                if(state_switch[i] != 0){
                    if(state[i] != 0)
                        state_load[i] = 0;
                    else 
                        state_load[i] = 1;
                    loadWrite(Load[i],state_load[i]);  
                    state[i] = state_load[i] ? 1 : 0;
                    if(whiteLed == 1)
                        loadWrite(white_led_load[i],!(state_load[i])); 
                }
                pre_switch[i] = state_switch[i];
            }
        }
        
        state_Fswitch[0] = CapSense_1_IsWidgetActive(F_switch[0]);
        if(state_Fswitch[0] != pre_Fswitch[0]){                         
            if(state_Fswitch[0] != 0){
                if(state[4] != 0)
                    state_Fan[0] = 0;
                else 
                    state_Fan[0] = 1;
                loadWrite(Fan_BW[0],state_Fan[0]);  
                state[4] = state_Fan[0] ? 1 : 0;
                if(whiteLed == 1)
                    loadWrite(Fan_BW[1],!(state_Fan[0])); 
                for (uint8 i = 0; i < 4; i++)
                    loadWrite(Fan[i], 0);
                if(state[4] == 1){
                    if(speed == 1){
                        loadWrite(Fan[1], 1);
                    } 
                    else if(speed == 2){
                        loadWrite(Fan[2], 1);
                    }
                    else if(speed == 3){
                        loadWrite(Fan[0], 1);
                        loadWrite(Fan[2], 1);
                    }
                    else if(speed == 4){
                        loadWrite(Fan[1], 1);
                        loadWrite(Fan[2], 1);
                    }
                    else if (speed == 5){
                        loadWrite(Fan[3], 1);
                    }
                }
                else if(state[4] == 0){
                    for (uint8 i = 0; i < 4; i++)
                        loadWrite(Fan[i], 0);
                } 
            }
            pre_Fswitch[0] = state_Fswitch[0];
        }
        
        if(CapSense_1_IsWidgetActive(F_UP_DWN[0]) != fan_state[0]){
            if(CapSense_1_IsWidgetActive(F_UP_DWN[0]) != 0){
                if(speed != 5)
                    speed++;                                 //fan state[3] increase by 1
                else
                    speed = 0;
                fan_state[0] = !(fan_state[0]);
                loadWrite(Fan_UDW[0],0);              // fan up white led off
                loadWrite(Fan_UDB[0],1);              //fan up blue led on
            }
            else{
                loadWrite(Fan_UDB[0],0);              //fan up blue led off
                if(whiteLed == 1)
                    loadWrite(Fan_UDW[0],1);          //fan up white led off
            }
            fan_state[0] = (CapSense_1_IsWidgetActive(F_UP_DWN[0]));
        }
        if(CapSense_1_IsWidgetActive(F_UP_DWN[1]) != fan_state[1]){             //check if fan down touch pad is pressed
            if(CapSense_1_IsWidgetActive(F_UP_DWN[1]) != 0){
                if(speed != 0)
                    speed--;                             //fan state[3] decrease by 1
                else
                    speed = 5;
                fan_state[1] = !(fan_state[1]);
                loadWrite(Fan_UDW[1],0);
                loadWrite(Fan_UDB[1],1);
            }
            else{
                loadWrite(Fan_UDB[1],0);
                if(whiteLed == 1)
                    loadWrite(Fan_UDW[1],1);
            }
            fan_state[1] = (CapSense_1_IsWidgetActive(F_UP_DWN[1]));
        }
        
        if(speed == 0){
            state[5] = 0;
            for(int i = 0;i<5;i++){
                loadWrite(Fan_led[i],0);            
            }
        }
        else if(speed == 1){
            state[5] = 1;
            loadWrite(Fan_led[0],1);
            for(int i = 1;i<5;i++){
                loadWrite(Fan_led[i],0);            
            }
        }
        else if(speed == 2){
            state[5] = 2;
            for(int i = 0;i<2;i++){
                loadWrite(Fan_led[i],1);            
            }
            for(int i = 2;i<5;i++){
                loadWrite(Fan_led[i],0);            
            }
        }
        else if(speed == 3){
            state[5] = 3;
            for(int i = 0;i<3;i++){
                loadWrite(Fan_led[i],1);            
            }
            for(int i = 3;i<5;i++){
                loadWrite(Fan_led[i],0);            
            }
        }
        else if(speed == 4){
            state[5] = 4;
            for(int i = 0;i<4;i++){
                loadWrite(Fan_led[i],1);            
            }
            loadWrite(Fan_led[4],0);  
        }
        else if(speed == 5){
            state[5] = 5;
            for(int i = 0;i<5;i++){
                loadWrite(Fan_led[i],1);            
            }
        }
        
        if(state[5] != pre_state[5]){
            for (uint8 i = 0; i < 4; i++)
                loadWrite(Fan[i], 0);
            if(state[4] == 1){
                if(speed == 1){
                    loadWrite(Fan[1], 1);
                } 
                else if(speed == 2){
                    loadWrite(Fan[2], 1);
                }
                else if(speed == 3){
                    loadWrite(Fan[0], 1);
                    loadWrite(Fan[2], 1);
                }
                else if(speed == 4){
                    loadWrite(Fan[1], 1);
                    loadWrite(Fan[2], 1);
                }
                else if (speed == 5){
                    loadWrite(Fan[3], 1);
                }
            }
            //pre_state[5] = state[5];
        }
            
        
        if(I2CFlag != 0)
        {
            I2CFlag = 0;  
            if (0u != (I2C_I2C_SSTAT_WR_CMPLT & I2C_I2CSlaveStatus()))
            {
                i2cReceive();
                I2C_I2CSlaveClearWriteBuf();
                (void) I2C_I2CSlaveClearWriteStatus();
            }
            
            if(0u != (I2C_I2C_SSTAT_RD_CMPLT & I2C_I2CSlaveStatus()))
            {
                I2C_I2CSlaveClearReadBuf();
                (void) I2C_I2CSlaveClearReadStatus();
            }          
        }
        
        for(uint8 i = 0 ; i < LightloadNumber + FanLoadNumber + 1; i++){
            if(state[i] != pre_state[i]){
                if((I2C_I2C_SSTAT_RD_BUSY & I2C_I2CSlaveStatus()) == 0){
                    pre_state[i] = state[i];
                    i2cReadBuffer[i] = state[i];
                }
            }
        }
        CySysWatchdogFeed(CY_SYS_WDT_COUNTER1);
    }
}

void i2cReceive(void){
    for (uint8 i = 0; i < LightloadNumber; i++) {
        state[i] = i2cWriteBuffer[i];
        if (state[i] == 0) {
            loadWrite(Load[i],0);
            if(whiteLed == 1)
                loadWrite(white_led_load[i],1);
        }
        else if (state[i] == 1) {
            loadWrite(Load[i], 1);
            loadWrite(white_led_load[i],0);
        }
    }
    
    state[4] = i2cWriteBuffer[4];
    if(state[4] != 0)
        state_Fan[0] = 0;
    else 
        state_Fan[0] = 1;
    loadWrite(Fan_BW[0],!state_Fan[0]);  
    loadWrite(Fan_BW[1],(state_Fan[0])); 
    
    state[5] = i2cWriteBuffer[5];
    speed = i2cWriteBuffer[5];

    for (uint8 i = 0; i < 4; i++)
        loadWrite(Fan[i], 0);
    if(state[4] == 1){
        if(speed == 1){
            loadWrite(Fan[1], 1);
        } 
        else if(speed == 2){
            loadWrite(Fan[2], 1);
        }
        else if(speed == 3){
            loadWrite(Fan[0], 1);
            loadWrite(Fan[2], 1);
        }
        else if(speed == 4){
            loadWrite(Fan[1], 1);
            loadWrite(Fan[2], 1);
        }
        else if (speed == 5){
            loadWrite(Fan[3], 1);
        }
    }
    
}

void loadWrite(uint8 loadpin,uint8 state){
    switch(loadpin){
        case 0:
            L0_Write(state);
            break;
        case 1:
            L1_Write(state);
            break;
        case 2:
            L2_Write(state);
            break;
        case 3:
            L3_Write(state);
            break;
        case 4:
            L4_Write(state);
            break;
        case 5:
            L5_Write(state);
            break;
        case 6:
            L6_Write(state);
            break;
        case 7:
            L7_Write(state);
            break;
        case 8:
            L8_Write(state);
            break;
        case 9:
            L9_Write(state);
            break;
        case 10:
            L10_Write(state);
            break;
        case 11:
            L11_Write(state);
            break;   
        case 12:
            L12_Write(state);
            break;
        case 13:
            L13_Write(state);
            break;
        case 14:
            L14_Write(state);
            break;
        case 15:
            L15_Write(state);
            break;
        case 16:
            L16_Write(state);
            break;
        case 17:
            L17_Write(state);
            break;
        case 18:
            L18_Write(state);
            break;
        case 19:
            L19_Write(state);
            break;
        case 20:
            L20_Write(state);
            break;
        case 21:
            L21_Write(state);
            break;
        case 22:
            L22_Write(state);
            break;
        case 23:
            L23_Write(state);
            break;
        case 24:
            L24_Write(state);
            break;
    }      
}
void HandleError(void)
{   
    
     /* Disable all interrupts. */
    __disable_irq();
    
    /* Infinite loop. */
    while(1u) {}
}

/* [] END OF FILE */
