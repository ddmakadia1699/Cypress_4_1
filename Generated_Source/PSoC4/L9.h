/*******************************************************************************
* File Name: L9.h  
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

#if !defined(CY_PINS_L9_H) /* Pins L9_H */
#define CY_PINS_L9_H

#include "cytypes.h"
#include "cyfitter.h"
#include "L9_aliases.h"


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
} L9_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   L9_Read(void);
void    L9_Write(uint8 value);
uint8   L9_ReadDataReg(void);
#if defined(L9__PC) || (CY_PSOC4_4200L) 
    void    L9_SetDriveMode(uint8 mode);
#endif
void    L9_SetInterruptMode(uint16 position, uint16 mode);
uint8   L9_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void L9_Sleep(void); 
void L9_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(L9__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define L9_DRIVE_MODE_BITS        (3)
    #define L9_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - L9_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the L9_SetDriveMode() function.
         *  @{
         */
        #define L9_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define L9_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define L9_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define L9_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define L9_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define L9_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define L9_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define L9_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define L9_MASK               L9__MASK
#define L9_SHIFT              L9__SHIFT
#define L9_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in L9_SetInterruptMode() function.
     *  @{
     */
        #define L9_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define L9_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define L9_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define L9_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(L9__SIO)
    #define L9_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(L9__PC) && (CY_PSOC4_4200L)
    #define L9_USBIO_ENABLE               ((uint32)0x80000000u)
    #define L9_USBIO_DISABLE              ((uint32)(~L9_USBIO_ENABLE))
    #define L9_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define L9_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define L9_USBIO_ENTER_SLEEP          ((uint32)((1u << L9_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << L9_USBIO_SUSPEND_DEL_SHIFT)))
    #define L9_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << L9_USBIO_SUSPEND_SHIFT)))
    #define L9_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << L9_USBIO_SUSPEND_DEL_SHIFT)))
    #define L9_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(L9__PC)
    /* Port Configuration */
    #define L9_PC                 (* (reg32 *) L9__PC)
#endif
/* Pin State */
#define L9_PS                     (* (reg32 *) L9__PS)
/* Data Register */
#define L9_DR                     (* (reg32 *) L9__DR)
/* Input Buffer Disable Override */
#define L9_INP_DIS                (* (reg32 *) L9__PC2)

/* Interrupt configuration Registers */
#define L9_INTCFG                 (* (reg32 *) L9__INTCFG)
#define L9_INTSTAT                (* (reg32 *) L9__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define L9_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(L9__SIO)
    #define L9_SIO_REG            (* (reg32 *) L9__SIO)
#endif /* (L9__SIO_CFG) */

/* USBIO registers */
#if !defined(L9__PC) && (CY_PSOC4_4200L)
    #define L9_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define L9_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define L9_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define L9_DRIVE_MODE_SHIFT       (0x00u)
#define L9_DRIVE_MODE_MASK        (0x07u << L9_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins L9_H */


/* [] END OF FILE */
