/*******************************************************************************
* File Name: L16.c  
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
#include "L16.h"

static L16_BACKUP_STRUCT  L16_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: L16_Sleep
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
*  \snippet L16_SUT.c usage_L16_Sleep_Wakeup
*******************************************************************************/
void L16_Sleep(void)
{
    #if defined(L16__PC)
        L16_backup.pcState = L16_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            L16_backup.usbState = L16_CR1_REG;
            L16_USB_POWER_REG |= L16_USBIO_ENTER_SLEEP;
            L16_CR1_REG &= L16_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(L16__SIO)
        L16_backup.sioState = L16_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        L16_SIO_REG &= (uint32)(~L16_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: L16_Wakeup
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
*  Refer to L16_Sleep() for an example usage.
*******************************************************************************/
void L16_Wakeup(void)
{
    #if defined(L16__PC)
        L16_PC = L16_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            L16_USB_POWER_REG &= L16_USBIO_EXIT_SLEEP_PH1;
            L16_CR1_REG = L16_backup.usbState;
            L16_USB_POWER_REG &= L16_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(L16__SIO)
        L16_SIO_REG = L16_backup.sioState;
    #endif
}


/* [] END OF FILE */
