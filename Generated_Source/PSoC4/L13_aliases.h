/*******************************************************************************
* File Name: L13.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_L13_ALIASES_H) /* Pins L13_ALIASES_H */
#define CY_PINS_L13_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define L13_0			(L13__0__PC)
#define L13_0_PS		(L13__0__PS)
#define L13_0_PC		(L13__0__PC)
#define L13_0_DR		(L13__0__DR)
#define L13_0_SHIFT	(L13__0__SHIFT)
#define L13_0_INTR	((uint16)((uint16)0x0003u << (L13__0__SHIFT*2u)))

#define L13_INTR_ALL	 ((uint16)(L13_0_INTR))


#endif /* End Pins L13_ALIASES_H */


/* [] END OF FILE */
