/*******************************************************************************
* File Name: L19.c  
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
#include "L19.h"

static L19_BACKUP_STRUCT  L19_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: L19_Sleep
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
*  \snippet L19_SUT.c usage_L19_Sleep_Wakeup
*******************************************************************************/
void L19_Sleep(void)
{
    #if defined(L19__PC)
        L19_backup.pcState = L19_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            L19_backup.usbState = L19_CR1_REG;
            L19_USB_POWER_REG |= L19_USBIO_ENTER_SLEEP;
            L19_CR1_REG &= L19_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(L19__SIO)
        L19_backup.sioState = L19_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        L19_SIO_REG &= (uint32)(~L19_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: L19_Wakeup
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
*  Refer to L19_Sleep() for an example usage.
*******************************************************************************/
void L19_Wakeup(void)
{
    #if defined(L19__PC)
        L19_PC = L19_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            L19_USB_POWER_REG &= L19_USBIO_EXIT_SLEEP_PH1;
            L19_CR1_REG = L19_backup.usbState;
            L19_USB_POWER_REG &= L19_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(L19__SIO)
        L19_SIO_REG = L19_backup.sioState;
    #endif
}


/* [] END OF FILE */
