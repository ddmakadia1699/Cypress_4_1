/*******************************************************************************
* File Name: L18.h  
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

#if !defined(CY_PINS_L18_H) /* Pins L18_H */
#define CY_PINS_L18_H

#include "cytypes.h"
#include "cyfitter.h"
#include "L18_aliases.h"


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
} L18_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   L18_Read(void);
void    L18_Write(uint8 value);
uint8   L18_ReadDataReg(void);
#if defined(L18__PC) || (CY_PSOC4_4200L) 
    void    L18_SetDriveMode(uint8 mode);
#endif
void    L18_SetInterruptMode(uint16 position, uint16 mode);
uint8   L18_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void L18_Sleep(void); 
void L18_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(L18__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define L18_DRIVE_MODE_BITS        (3)
    #define L18_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - L18_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the L18_SetDriveMode() function.
         *  @{
         */
        #define L18_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define L18_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define L18_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define L18_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define L18_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define L18_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define L18_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define L18_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define L18_MASK               L18__MASK
#define L18_SHIFT              L18__SHIFT
#define L18_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in L18_SetInterruptMode() function.
     *  @{
     */
        #define L18_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define L18_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define L18_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define L18_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(L18__SIO)
    #define L18_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(L18__PC) && (CY_PSOC4_4200L)
    #define L18_USBIO_ENABLE               ((uint32)0x80000000u)
    #define L18_USBIO_DISABLE              ((uint32)(~L18_USBIO_ENABLE))
    #define L18_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define L18_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define L18_USBIO_ENTER_SLEEP          ((uint32)((1u << L18_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << L18_USBIO_SUSPEND_DEL_SHIFT)))
    #define L18_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << L18_USBIO_SUSPEND_SHIFT)))
    #define L18_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << L18_USBIO_SUSPEND_DEL_SHIFT)))
    #define L18_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(L18__PC)
    /* Port Configuration */
    #define L18_PC                 (* (reg32 *) L18__PC)
#endif
/* Pin State */
#define L18_PS                     (* (reg32 *) L18__PS)
/* Data Register */
#define L18_DR                     (* (reg32 *) L18__DR)
/* Input Buffer Disable Override */
#define L18_INP_DIS                (* (reg32 *) L18__PC2)

/* Interrupt configuration Registers */
#define L18_INTCFG                 (* (reg32 *) L18__INTCFG)
#define L18_INTSTAT                (* (reg32 *) L18__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define L18_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(L18__SIO)
    #define L18_SIO_REG            (* (reg32 *) L18__SIO)
#endif /* (L18__SIO_CFG) */

/* USBIO registers */
#if !defined(L18__PC) && (CY_PSOC4_4200L)
    #define L18_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define L18_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define L18_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define L18_DRIVE_MODE_SHIFT       (0x00u)
#define L18_DRIVE_MODE_MASK        (0x07u << L18_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins L18_H */


/* [] END OF FILE */
