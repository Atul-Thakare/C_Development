/**********************************************************
 *  File Name:	RandomGen.c
 *  Created on: 05-Mar-2021
 *  Author: 	Atul.thakare001
 ***********************************************************/

#include "RandomGen.h"

sint32 getRandomNum(sint32 lower, sint32 upper)
{
  sint32 retVal;
  retVal = (rand() % (upper - lower + 1)) + lower;
  return (retVal);
}
