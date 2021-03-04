/*
 * main.c
 *
 *  Created on: 03-Mar-2021
 *  Author: atul.thakare001
 */

#include "Queue_Func.h"

int main(void)
{
	printf("Queing \n");
	fGenerateQue(0x11U);
	fEnqueElement(0x43);
	fEnqueElement(-32);

	return 0;
}

