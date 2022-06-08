/*******************************************************************************
* File Name: L20.h  
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

#if !defined(CY_PINS_L20_ALIASES_H) /* Pins L20_ALIASES_H */
#define CY_PINS_L20_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define L20_0			(L20__0__PC)
#define L20_0_PS		(L20__0__PS)
#define L20_0_PC		(L20__0__PC)
#define L20_0_DR		(L20__0__DR)
#define L20_0_SHIFT	(L20__0__SHIFT)
#define L20_0_INTR	((uint16)((uint16)0x0003u << (L20__0__SHIFT*2u)))

#define L20_INTR_ALL	 ((uint16)(L20_0_INTR))


#endif /* End Pins L20_ALIASES_H */


/* [] END OF FILE */
