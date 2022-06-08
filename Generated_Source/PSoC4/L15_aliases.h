/*******************************************************************************
* File Name: L15.h  
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

#if !defined(CY_PINS_L15_ALIASES_H) /* Pins L15_ALIASES_H */
#define CY_PINS_L15_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define L15_0			(L15__0__PC)
#define L15_0_PS		(L15__0__PS)
#define L15_0_PC		(L15__0__PC)
#define L15_0_DR		(L15__0__DR)
#define L15_0_SHIFT	(L15__0__SHIFT)
#define L15_0_INTR	((uint16)((uint16)0x0003u << (L15__0__SHIFT*2u)))

#define L15_INTR_ALL	 ((uint16)(L15_0_INTR))


#endif /* End Pins L15_ALIASES_H */


/* [] END OF FILE */
