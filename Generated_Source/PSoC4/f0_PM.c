/*******************************************************************************
* File Name: f0.c  
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
#include "f0.h"

static f0_BACKUP_STRUCT  f0_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: f0_Sleep
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
*  \snippet f0_SUT.c usage_f0_Sleep_Wakeup
*******************************************************************************/
void f0_Sleep(void)
{
    #if defined(f0__PC)
        f0_backup.pcState = f0_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            f0_backup.usbState = f0_CR1_REG;
            f0_USB_POWER_REG |= f0_USBIO_ENTER_SLEEP;
            f0_CR1_REG &= f0_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(f0__SIO)
        f0_backup.sioState = f0_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        f0_SIO_REG &= (uint32)(~f0_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: f0_Wakeup
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
*  Refer to f0_Sleep() for an example usage.
*******************************************************************************/
void f0_Wakeup(void)
{
    #if defined(f0__PC)
        f0_PC = f0_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            f0_USB_POWER_REG &= f0_USBIO_EXIT_SLEEP_PH1;
            f0_CR1_REG = f0_backup.usbState;
            f0_USB_POWER_REG &= f0_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(f0__SIO)
        f0_SIO_REG = f0_backup.sioState;
    #endif
}


/* [] END OF FILE */
