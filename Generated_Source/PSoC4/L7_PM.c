/*******************************************************************************
* File Name: L7.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "L7.h"

static L7_BACKUP_STRUCT  L7_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: L7_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function applies only to SIO and USBIO pins.
*  It should not be called for GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet L7_SUT.c usage_L7_Sleep_Wakeup
*******************************************************************************/
void L7_Sleep(void)
{
    #if defined(L7__PC)
        L7_backup.pcState = L7_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            L7_backup.usbState = L7_CR1_REG;
            L7_USB_POWER_REG |= L7_USBIO_ENTER_SLEEP;
            L7_CR1_REG &= L7_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(L7__SIO)
        L7_backup.sioState = L7_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        L7_SIO_REG &= (uint32)(~L7_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: L7_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep(). This 
* function applies only to SIO and USBIO pins. It should not be called for
* GPIO or GPIO_OVT pins.
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to L7_Sleep() for an example usage.
*******************************************************************************/
void L7_Wakeup(void)
{
    #if defined(L7__PC)
        L7_PC = L7_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            L7_USB_POWER_REG &= L7_USBIO_EXIT_SLEEP_PH1;
            L7_CR1_REG = L7_backup.usbState;
            L7_USB_POWER_REG &= L7_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(L7__SIO)
        L7_SIO_REG = L7_backup.sioState;
    #endif
}


/* [] END OF FILE */
