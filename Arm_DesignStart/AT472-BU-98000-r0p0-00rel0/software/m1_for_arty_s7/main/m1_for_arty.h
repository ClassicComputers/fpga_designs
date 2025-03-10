/*
 * Copyright:
 * ----------------------------------------------------------------
 * This confidential and proprietary software may be used only as
 * authorised by a licensing agreement from ARM Limited
 *   (C) COPYRIGHT 2018 ARM Limited
 *       ALL RIGHTS RESERVED
 * The entire notice above must be reproduced on all authorised
 * copies and copies may only be made to the extent permitted
 * by a licensing agreement from ARM Limited.
 * ----------------------------------------------------------------
 * File:     m1_for_arty.h
 * Release Information : Cortex-M1 DesignStart-r0p0-00rel0
 * ----------------------------------------------------------------
 */

#ifndef __M1_FOR_ARTY_H
#define __M1_FOR_ARTY_H

#include "peripherallink.h"                         /* device specific header file    */

#if defined ( __CC_ARM   )
#pragma anon_unions
#endif


/******************************************************************************/
/*                     General MACRO Definitions                              */
/******************************************************************************/

//#define DEBUG
#ifdef DEBUG
    #define debug(...)      printf(__VA_ARGS__)
#else
    #define debug(...)
#endif  // ifdef DEBUG


#endif /* __M1_FOR_ARTY_H */
