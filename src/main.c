/*
 * main.c
 *
 *  Created on: 03-Mar-2021
 *  Author: atul.thakare001
 */

#include "Queue_Func.h"
#include "RandomNum.h"

void fFillQue(QueType* lptr_Que);

int main(void)
{
	QueType* ptr_MainQue;
	StdRet_Type retVal;

	printf("Queing \n");
	ptr_MainQue = fGenerateQue(&retVal,0x11U);
	fFillQue(ptr_MainQue);

	if(retVal == E_OK)
	{
//		fPrintQueElements(ptr_MainQue);

		fDequeElement(ptr_MainQue);

		fEnqueElement(ptr_MainQue,0x43);

		fPeekFirstElement(ptr_MainQue,NULL_PTR);
		fPeekLastElement(ptr_MainQue, NULL_PTR);

//		fPrintQueElements(ptr_MainQue);

		fDequeElement(ptr_MainQue);

		fEnqueElement(ptr_MainQue,-32);

        fPeekFirstElement(ptr_MainQue,NULL_PTR);
		fPeekLastElement(ptr_MainQue, NULL_PTR);


//		fPrintQueElements(ptr_MainQue);

		fDequeElement(ptr_MainQue);

        fPeekFirstElement(ptr_MainQue,NULL_PTR);
		fPeekLastElement(ptr_MainQue, NULL_PTR);

		fPrintQueElements(ptr_MainQue);
	}
	else
	{
		printf("Error Occured in queue generation\n ");
	}


	return 0;
}

void fFillQue(QueType* lptr_Que)
{
	uint32 itr;
	StdRet_Type retVal;
	for (itr =0 ;itr < lptr_Que->LusCapacity;itr++)
	{
		retVal = fEnqueElement(lptr_Que,getRandomNum(GBL_RAND_MIN,GBL_RAND_MAX));
		if(retVal == E_FULL)
		{
			break;
		}
	}
	printf("Queue is filled");
}
