/*******************************************************************************
* File Name: L6.h  
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

#if !defined(CY_PINS_L6_H) /* Pins L6_H */
#define CY_PINS_L6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "L6_aliases.h"


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
} L6_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   L6_Read(void);
void    L6_Write(uint8 value);
uint8   L6_ReadDataReg(void);
#if defined(L6__PC) || (CY_PSOC4_4200L) 
    void    L6_SetDriveMode(uint8 mode);
#endif
void    L6_SetInterruptMode(uint16 position, uint16 mode);
uint8   L6_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void L6_Sleep(void); 
void L6_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(L6__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define L6_DRIVE_MODE_BITS        (3)
    #define L6_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - L6_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the L6_SetDriveMode() function.
         *  @{
         */
        #define L6_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define L6_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define L6_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define L6_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define L6_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define L6_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define L6_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define L6_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define L6_MASK               L6__MASK
#define L6_SHIFT              L6__SHIFT
#define L6_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in L6_SetInterruptMode() function.
     *  @{
     */
        #define L6_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define L6_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define L6_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define L6_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(L6__SIO)
    #define L6_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(L6__PC) && (CY_PSOC4_4200L)
    #define L6_USBIO_ENABLE               ((uint32)0x80000000u)
    #define L6_USBIO_DISABLE              ((uint32)(~L6_USBIO_ENABLE))
    #define L6_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define L6_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define L6_USBIO_ENTER_SLEEP          ((uint32)((1u << L6_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << L6_USBIO_SUSPEND_DEL_SHIFT)))
    #define L6_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << L6_USBIO_SUSPEND_SHIFT)))
    #define L6_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << L6_USBIO_SUSPEND_DEL_SHIFT)))
    #define L6_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(L6__PC)
    /* Port Configuration */
    #define L6_PC                 (* (reg32 *) L6__PC)
#endif
/* Pin State */
#define L6_PS                     (* (reg32 *) L6__PS)
/* Data Register */
#define L6_DR                     (* (reg32 *) L6__DR)
/* Input Buffer Disable Override */
#define L6_INP_DIS                (* (reg32 *) L6__PC2)

/* Interrupt configuration Registers */
#define L6_INTCFG                 (* (reg32 *) L6__INTCFG)
#define L6_INTSTAT                (* (reg32 *) L6__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define L6_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(L6__SIO)
    #define L6_SIO_REG            (* (reg32 *) L6__SIO)
#endif /* (L6__SIO_CFG) */

/* USBIO registers */
#if !defined(L6__PC) && (CY_PSOC4_4200L)
    #define L6_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define L6_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define L6_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define L6_DRIVE_MODE_SHIFT       (0x00u)
#define L6_DRIVE_MODE_MASK        (0x07u << L6_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins L6_H */


/* [] END OF FILE */
