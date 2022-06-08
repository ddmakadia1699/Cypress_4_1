/*******************************************************************************
* File Name: f2.h  
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

#if !defined(CY_PINS_f2_ALIASES_H) /* Pins f2_ALIASES_H */
#define CY_PINS_f2_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define f2_0			(f2__0__PC)
#define f2_0_PS		(f2__0__PS)
#define f2_0_PC		(f2__0__PC)
#define f2_0_DR		(f2__0__DR)
#define f2_0_SHIFT	(f2__0__SHIFT)
#define f2_0_INTR	((uint16)((uint16)0x0003u << (f2__0__SHIFT*2u)))

#define f2_INTR_ALL	 ((uint16)(f2_0_INTR))


#endif /* End Pins f2_ALIASES_H */


/* [] END OF FILE */
