/*******************************************************************************
* File Name: L0.c  
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
#include "L0.h"

static L0_BACKUP_STRUCT  L0_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: L0_Sleep
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
*  \snippet L0_SUT.c usage_L0_Sleep_Wakeup
*******************************************************************************/
void L0_Sleep(void)
{
    #if defined(L0__PC)
        L0_backup.pcState = L0_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            L0_backup.usbState = L0_CR1_REG;
            L0_USB_POWER_REG |= L0_USBIO_ENTER_SLEEP;
            L0_CR1_REG &= L0_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(L0__SIO)
        L0_backup.sioState = L0_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        L0_SIO_REG &= (uint32)(~L0_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: L0_Wakeup
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
*  Refer to L0_Sleep() for an example usage.
*******************************************************************************/
void L0_Wakeup(void)
{
    #if defined(L0__PC)
        L0_PC = L0_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            L0_USB_POWER_REG &= L0_USBIO_EXIT_SLEEP_PH1;
            L0_CR1_REG = L0_backup.usbState;
            L0_USB_POWER_REG &= L0_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(L0__SIO)
        L0_SIO_REG = L0_backup.sioState;
    #endif
}


/* [] END OF FILE */
