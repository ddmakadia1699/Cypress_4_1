/*******************************************************************************
* File Name: f0.h  
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

#if !defined(CY_PINS_f0_ALIASES_H) /* Pins f0_ALIASES_H */
#define CY_PINS_f0_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define f0_0			(f0__0__PC)
#define f0_0_PS		(f0__0__PS)
#define f0_0_PC		(f0__0__PC)
#define f0_0_DR		(f0__0__DR)
#define f0_0_SHIFT	(f0__0__SHIFT)
#define f0_0_INTR	((uint16)((uint16)0x0003u << (f0__0__SHIFT*2u)))

#define f0_INTR_ALL	 ((uint16)(f0_0_INTR))


#endif /* End Pins f0_ALIASES_H */


/* [] END OF FILE */
