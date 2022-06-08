/*******************************************************************************
* File Name: f3.h  
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

#if !defined(CY_PINS_f3_H) /* Pins f3_H */
#define CY_PINS_f3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "f3_aliases.h"


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
} f3_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   f3_Read(void);
void    f3_Write(uint8 value);
uint8   f3_ReadDataReg(void);
#if defined(f3__PC) || (CY_PSOC4_4200L) 
    void    f3_SetDriveMode(uint8 mode);
#endif
void    f3_SetInterruptMode(uint16 position, uint16 mode);
uint8   f3_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void f3_Sleep(void); 
void f3_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(f3__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define f3_DRIVE_MODE_BITS        (3)
    #define f3_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - f3_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the f3_SetDriveMode() function.
         *  @{
         */
        #define f3_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define f3_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define f3_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define f3_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define f3_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define f3_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define f3_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define f3_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define f3_MASK               f3__MASK
#define f3_SHIFT              f3__SHIFT
#define f3_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in f3_SetInterruptMode() function.
     *  @{
     */
        #define f3_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define f3_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define f3_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define f3_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(f3__SIO)
    #define f3_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(f3__PC) && (CY_PSOC4_4200L)
    #define f3_USBIO_ENABLE               ((uint32)0x80000000u)
    #define f3_USBIO_DISABLE              ((uint32)(~f3_USBIO_ENABLE))
    #define f3_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define f3_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define f3_USBIO_ENTER_SLEEP          ((uint32)((1u << f3_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << f3_USBIO_SUSPEND_DEL_SHIFT)))
    #define f3_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << f3_USBIO_SUSPEND_SHIFT)))
    #define f3_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << f3_USBIO_SUSPEND_DEL_SHIFT)))
    #define f3_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(f3__PC)
    /* Port Configuration */
    #define f3_PC                 (* (reg32 *) f3__PC)
#endif
/* Pin State */
#define f3_PS                     (* (reg32 *) f3__PS)
/* Data Register */
#define f3_DR                     (* (reg32 *) f3__DR)
/* Input Buffer Disable Override */
#define f3_INP_DIS                (* (reg32 *) f3__PC2)

/* Interrupt configuration Registers */
#define f3_INTCFG                 (* (reg32 *) f3__INTCFG)
#define f3_INTSTAT                (* (reg32 *) f3__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define f3_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(f3__SIO)
    #define f3_SIO_REG            (* (reg32 *) f3__SIO)
#endif /* (f3__SIO_CFG) */

/* USBIO registers */
#if !defined(f3__PC) && (CY_PSOC4_4200L)
    #define f3_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define f3_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define f3_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define f3_DRIVE_MODE_SHIFT       (0x00u)
#define f3_DRIVE_MODE_MASK        (0x07u << f3_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins f3_H */


/* [] END OF FILE */
