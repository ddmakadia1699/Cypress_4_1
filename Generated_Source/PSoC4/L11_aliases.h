/*******************************************************************************
* File Name: L11.h  
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

#if !defined(CY_PINS_L11_ALIASES_H) /* Pins L11_ALIASES_H */
#define CY_PINS_L11_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define L11_0			(L11__0__PC)
#define L11_0_PS		(L11__0__PS)
#define L11_0_PC		(L11__0__PC)
#define L11_0_DR		(L11__0__DR)
#define L11_0_SHIFT	(L11__0__SHIFT)
#define L11_0_INTR	((uint16)((uint16)0x0003u << (L11__0__SHIFT*2u)))

#define L11_INTR_ALL	 ((uint16)(L11_0_INTR))


#endif /* End Pins L11_ALIASES_H */


/* [] END OF FILE */
