/*******************************************************************************
* File Name: L7.h  
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

#if !defined(CY_PINS_L7_H) /* Pins L7_H */
#define CY_PINS_L7_H

#include "cytypes.h"
#include "cyfitter.h"
#include "L7_aliases.h"


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
} L7_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   L7_Read(void);
void    L7_Write(uint8 value);
uint8   L7_ReadDataReg(void);
#if defined(L7__PC) || (CY_PSOC4_4200L) 
    void    L7_SetDriveMode(uint8 mode);
#endif
void    L7_SetInterruptMode(uint16 position, uint16 mode);
uint8   L7_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void L7_Sleep(void); 
void L7_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(L7__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define L7_DRIVE_MODE_BITS        (3)
    #define L7_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - L7_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the L7_SetDriveMode() function.
         *  @{
         */
        #define L7_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define L7_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define L7_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define L7_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define L7_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define L7_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define L7_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define L7_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define L7_MASK               L7__MASK
#define L7_SHIFT              L7__SHIFT
#define L7_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in L7_SetInterruptMode() function.
     *  @{
     */
        #define L7_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define L7_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define L7_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define L7_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(L7__SIO)
    #define L7_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(L7__PC) && (CY_PSOC4_4200L)
    #define L7_USBIO_ENABLE               ((uint32)0x80000000u)
    #define L7_USBIO_DISABLE              ((uint32)(~L7_USBIO_ENABLE))
    #define L7_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define L7_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define L7_USBIO_ENTER_SLEEP          ((uint32)((1u << L7_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << L7_USBIO_SUSPEND_DEL_SHIFT)))
    #define L7_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << L7_USBIO_SUSPEND_SHIFT)))
    #define L7_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << L7_USBIO_SUSPEND_DEL_SHIFT)))
    #define L7_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(L7__PC)
    /* Port Configuration */
    #define L7_PC                 (* (reg32 *) L7__PC)
#endif
/* Pin State */
#define L7_PS                     (* (reg32 *) L7__PS)
/* Data Register */
#define L7_DR                     (* (reg32 *) L7__DR)
/* Input Buffer Disable Override */
#define L7_INP_DIS                (* (reg32 *) L7__PC2)

/* Interrupt configuration Registers */
#define L7_INTCFG                 (* (reg32 *) L7__INTCFG)
#define L7_INTSTAT                (* (reg32 *) L7__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define L7_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(L7__SIO)
    #define L7_SIO_REG            (* (reg32 *) L7__SIO)
#endif /* (L7__SIO_CFG) */

/* USBIO registers */
#if !defined(L7__PC) && (CY_PSOC4_4200L)
    #define L7_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define L7_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define L7_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define L7_DRIVE_MODE_SHIFT       (0x00u)
#define L7_DRIVE_MODE_MASK        (0x07u << L7_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins L7_H */


/* [] END OF FILE */
