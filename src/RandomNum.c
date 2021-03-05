/*
 * RandomNum.c
 *
 *  Created on: 05-Mar-2021
 *      Author: atulpt01
 */


#include "RandomNum.h"

sint32 getRandomNum(sint32 lower, sint32 upper)
{
	sint32 retVal;
    retVal = (rand() % (upper - lower + 1)) + lower;
    return (retVal);

}
