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
#ifndef CYAPICALLBACKS_H
#define CYAPICALLBACKS_H
    

    /*Define your macro callbacks here */
    /*For more information, refer to the Writing Code topic in the PSoC Creator Help.*/
      /* Enable the EXIT_CALLBACK function in the generated *
     * source file I2CS_I2C_INT.c                         */
    #define I2C_I2C_ISR_EXIT_CALLBACK
    void I2C_I2C_ISR_ExitCallback(void);
    
#endif /* CYAPICALLBACKS_H */   
/* [] */
