/*******************************************************************************
* File Name: f3.c  
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
#include "f3.h"

static f3_BACKUP_STRUCT  f3_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: f3_Sleep
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
*  \snippet f3_SUT.c usage_f3_Sleep_Wakeup
*******************************************************************************/
void f3_Sleep(void)
{
    #if defined(f3__PC)
        f3_backup.pcState = f3_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            f3_backup.usbState = f3_CR1_REG;
            f3_USB_POWER_REG |= f3_USBIO_ENTER_SLEEP;
            f3_CR1_REG &= f3_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(f3__SIO)
        f3_backup.sioState = f3_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        f3_SIO_REG &= (uint32)(~f3_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: f3_Wakeup
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
*  Refer to f3_Sleep() for an example usage.
*******************************************************************************/
void f3_Wakeup(void)
{
    #if defined(f3__PC)
        f3_PC = f3_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            f3_USB_POWER_REG &= f3_USBIO_EXIT_SLEEP_PH1;
            f3_CR1_REG = f3_backup.usbState;
            f3_USB_POWER_REG &= f3_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(f3__SIO)
        f3_SIO_REG = f3_backup.sioState;
    #endif
}


/* [] END OF FILE */
