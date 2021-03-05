/*
 * Common_Def.h
 *
 *  Created on: 03-Mar-2021
 *  Author: atul.thakare001
 */

#ifndef INC_COMMON_DEF_H_
#define INC_COMMON_DEF_H_

#include <stdlib.h>
#include <stdio.h>

#define NULL_PTR (void*)0

typedef unsigned char uint8;
typedef signed char sint8;

typedef unsigned short uint16;
typedef signed short sint16;

typedef unsigned int uint32;
typedef signed int sint32;

typedef enum
{
	E_OK = 0,
	E_NOT_OK = 1,
	E_FULL,
	E_EMPTY,
	E_BUSY
}StdRet_Type;

#endif /* INC_COMMON_DEF_H_ */
