/*******************************************************************************
* File Name: L24.h  
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

#if !defined(CY_PINS_L24_H) /* Pins L24_H */
#define CY_PINS_L24_H

#include "cytypes.h"
#include "cyfitter.h"
#include "L24_aliases.h"


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
} L24_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   L24_Read(void);
void    L24_Write(uint8 value);
uint8   L24_ReadDataReg(void);
#if defined(L24__PC) || (CY_PSOC4_4200L) 
    void    L24_SetDriveMode(uint8 mode);
#endif
void    L24_SetInterruptMode(uint16 position, uint16 mode);
uint8   L24_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void L24_Sleep(void); 
void L24_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(L24__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define L24_DRIVE_MODE_BITS        (3)
    #define L24_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - L24_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the L24_SetDriveMode() function.
         *  @{
         */
        #define L24_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define L24_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define L24_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define L24_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define L24_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define L24_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define L24_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define L24_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define L24_MASK               L24__MASK
#define L24_SHIFT              L24__SHIFT
#define L24_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in L24_SetInterruptMode() function.
     *  @{
     */
        #define L24_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define L24_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define L24_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define L24_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(L24__SIO)
    #define L24_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(L24__PC) && (CY_PSOC4_4200L)
    #define L24_USBIO_ENABLE               ((uint32)0x80000000u)
    #define L24_USBIO_DISABLE              ((uint32)(~L24_USBIO_ENABLE))
    #define L24_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define L24_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define L24_USBIO_ENTER_SLEEP          ((uint32)((1u << L24_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << L24_USBIO_SUSPEND_DEL_SHIFT)))
    #define L24_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << L24_USBIO_SUSPEND_SHIFT)))
    #define L24_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << L24_USBIO_SUSPEND_DEL_SHIFT)))
    #define L24_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(L24__PC)
    /* Port Configuration */
    #define L24_PC                 (* (reg32 *) L24__PC)
#endif
/* Pin State */
#define L24_PS                     (* (reg32 *) L24__PS)
/* Data Register */
#define L24_DR                     (* (reg32 *) L24__DR)
/* Input Buffer Disable Override */
#define L24_INP_DIS                (* (reg32 *) L24__PC2)

/* Interrupt configuration Registers */
#define L24_INTCFG                 (* (reg32 *) L24__INTCFG)
#define L24_INTSTAT                (* (reg32 *) L24__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define L24_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(L24__SIO)
    #define L24_SIO_REG            (* (reg32 *) L24__SIO)
#endif /* (L24__SIO_CFG) */

/* USBIO registers */
#if !defined(L24__PC) && (CY_PSOC4_4200L)
    #define L24_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define L24_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define L24_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define L24_DRIVE_MODE_SHIFT       (0x00u)
#define L24_DRIVE_MODE_MASK        (0x07u << L24_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins L24_H */


/* [] END OF FILE */
