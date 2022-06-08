/*******************************************************************************
* File Name: L14.h  
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

#if !defined(CY_PINS_L14_H) /* Pins L14_H */
#define CY_PINS_L14_H

#include "cytypes.h"
#include "cyfitter.h"
#include "L14_aliases.h"


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
} L14_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   L14_Read(void);
void    L14_Write(uint8 value);
uint8   L14_ReadDataReg(void);
#if defined(L14__PC) || (CY_PSOC4_4200L) 
    void    L14_SetDriveMode(uint8 mode);
#endif
void    L14_SetInterruptMode(uint16 position, uint16 mode);
uint8   L14_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void L14_Sleep(void); 
void L14_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(L14__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define L14_DRIVE_MODE_BITS        (3)
    #define L14_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - L14_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the L14_SetDriveMode() function.
         *  @{
         */
        #define L14_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define L14_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define L14_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define L14_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define L14_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define L14_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define L14_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define L14_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define L14_MASK               L14__MASK
#define L14_SHIFT              L14__SHIFT
#define L14_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in L14_SetInterruptMode() function.
     *  @{
     */
        #define L14_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define L14_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define L14_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define L14_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(L14__SIO)
    #define L14_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(L14__PC) && (CY_PSOC4_4200L)
    #define L14_USBIO_ENABLE               ((uint32)0x80000000u)
    #define L14_USBIO_DISABLE              ((uint32)(~L14_USBIO_ENABLE))
    #define L14_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define L14_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define L14_USBIO_ENTER_SLEEP          ((uint32)((1u << L14_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << L14_USBIO_SUSPEND_DEL_SHIFT)))
    #define L14_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << L14_USBIO_SUSPEND_SHIFT)))
    #define L14_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << L14_USBIO_SUSPEND_DEL_SHIFT)))
    #define L14_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(L14__PC)
    /* Port Configuration */
    #define L14_PC                 (* (reg32 *) L14__PC)
#endif
/* Pin State */
#define L14_PS                     (* (reg32 *) L14__PS)
/* Data Register */
#define L14_DR                     (* (reg32 *) L14__DR)
/* Input Buffer Disable Override */
#define L14_INP_DIS                (* (reg32 *) L14__PC2)

/* Interrupt configuration Registers */
#define L14_INTCFG                 (* (reg32 *) L14__INTCFG)
#define L14_INTSTAT                (* (reg32 *) L14__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define L14_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(L14__SIO)
    #define L14_SIO_REG            (* (reg32 *) L14__SIO)
#endif /* (L14__SIO_CFG) */

/* USBIO registers */
#if !defined(L14__PC) && (CY_PSOC4_4200L)
    #define L14_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define L14_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define L14_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define L14_DRIVE_MODE_SHIFT       (0x00u)
#define L14_DRIVE_MODE_MASK        (0x07u << L14_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins L14_H */


/* [] END OF FILE */
