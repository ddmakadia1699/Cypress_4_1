/*******************************************************************************
* File Name: L16.h  
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

#if !defined(CY_PINS_L16_ALIASES_H) /* Pins L16_ALIASES_H */
#define CY_PINS_L16_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define L16_0			(L16__0__PC)
#define L16_0_PS		(L16__0__PS)
#define L16_0_PC		(L16__0__PC)
#define L16_0_DR		(L16__0__DR)
#define L16_0_SHIFT	(L16__0__SHIFT)
#define L16_0_INTR	((uint16)((uint16)0x0003u << (L16__0__SHIFT*2u)))

#define L16_INTR_ALL	 ((uint16)(L16_0_INTR))


#endif /* End Pins L16_ALIASES_H */


/* [] END OF FILE */
