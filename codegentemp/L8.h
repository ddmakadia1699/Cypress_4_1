/*******************************************************************************
* File Name: L8.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_L8_H) /* Pins L8_H */
#define CY_PINS_L8_H

#include "cytypes.h"
#include "cyfitter.h"
#include "L8_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} L8_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   L8_Read(void);
void    L8_Write(uint8 value);
uint8   L8_ReadDataReg(void);
#if defined(L8__PC) || (CY_PSOC4_4200L) 
    void    L8_SetDriveMode(uint8 mode);
#endif
void    L8_SetInterruptMode(uint16 position, uint16 mode);
uint8   L8_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void L8_Sleep(void); 
void L8_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(L8__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define L8_DRIVE_MODE_BITS        (3)
    #define L8_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - L8_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the L8_SetDriveMode() function.
         *  @{
         */
        #define L8_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define L8_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define L8_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define L8_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define L8_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define L8_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define L8_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define L8_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define L8_MASK               L8__MASK
#define L8_SHIFT              L8__SHIFT
#define L8_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in L8_SetInterruptMode() function.
     *  @{
     */
        #define L8_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define L8_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define L8_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define L8_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(L8__SIO)
    #define L8_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(L8__PC) && (CY_PSOC4_4200L)
    #define L8_USBIO_ENABLE               ((uint32)0x80000000u)
    #define L8_USBIO_DISABLE              ((uint32)(~L8_USBIO_ENABLE))
    #define L8_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define L8_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define L8_USBIO_ENTER_SLEEP          ((uint32)((1u << L8_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << L8_USBIO_SUSPEND_DEL_SHIFT)))
    #define L8_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << L8_USBIO_SUSPEND_SHIFT)))
    #define L8_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << L8_USBIO_SUSPEND_DEL_SHIFT)))
    #define L8_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(L8__PC)
    /* Port Configuration */
    #define L8_PC                 (* (reg32 *) L8__PC)
#endif
/* Pin State */
#define L8_PS                     (* (reg32 *) L8__PS)
/* Data Register */
#define L8_DR                     (* (reg32 *) L8__DR)
/* Input Buffer Disable Override */
#define L8_INP_DIS                (* (reg32 *) L8__PC2)

/* Interrupt configuration Registers */
#define L8_INTCFG                 (* (reg32 *) L8__INTCFG)
#define L8_INTSTAT                (* (reg32 *) L8__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define L8_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(L8__SIO)
    #define L8_SIO_REG            (* (reg32 *) L8__SIO)
#endif /* (L8__SIO_CFG) */

/* USBIO registers */
#if !defined(L8__PC) && (CY_PSOC4_4200L)
    #define L8_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define L8_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define L8_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define L8_DRIVE_MODE_SHIFT       (0x00u)
#define L8_DRIVE_MODE_MASK        (0x07u << L8_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins L8_H */


/* [] END OF FILE */
