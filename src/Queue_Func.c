/*
 * Queue_Func.c
 *
 *  Created on: 03-Mar-2021
 *  Author: atul.thakare001
 */
#include "Queue_Func.h"

QueType* fGenerateQue(StdRet_Type* ptr_retVal ,uint16 Lus_Capacity)
{
	StdRet_Type retVal = E_OK;
	QueType* lptr_Que;

	lptr_Que = (QueType*) malloc(sizeof(QueType));
	lptr_Que->LusCapacity = Lus_Capacity;
	lptr_Que->LusFront = 0;
	lptr_Que->LusSize = 0;
	lptr_Que->LusRear = Lus_Capacity-1U;
	lptr_Que->arrElement = (sint32*)malloc(sizeof(sint32)*(lptr_Que->LusCapacity));

	printf("Generated Queue of size [%d]\n",Lus_Capacity);
	printf("Queue Start Pointer %p\n",(void*)lptr_Que);

	*ptr_retVal = retVal;
	return (lptr_Que);
}

void fPrintQueElements(QueType* ptr_Que)
{
	uint32 lui_Itr = 0;
	printf("Element Array : \n");
	for (lui_Itr = 0;lui_Itr < (ptr_Que->LusCapacity);lui_Itr++)
	{
		printf("%d\t",(sint32)*((ptr_Que->arrElement) + lui_Itr));
	}
	printf("\n");
}

StdRet_Type fEnqueElement(QueType* ptr_Que,sint32 Lsi_Element)
{
	StdRet_Type retVal = E_OK;
	retVal = fIsQueueFull(ptr_Que);
	if( retVal != E_FULL)
	{
		ptr_Que->LusRear = (ptr_Que->LusRear + 1)%(ptr_Que->LusCapacity);
		ptr_Que->arrElement[ptr_Que->LusRear] = Lsi_Element;
		ptr_Que->LusSize = ptr_Que->LusSize +1U;
		printf("Enqueued Element - %d \n",Lsi_Element);
	}
	else
	{

	}


	return (retVal);
}

StdRet_Type fDequeElement(QueType* ptr_Que)
{
	StdRet_Type retVal = E_OK;
	sint32 Lsi_Element;
	retVal = fIsQueueEmpty(ptr_Que);
	if( retVal != E_EMPTY)
	{
		Lsi_Element = ptr_Que->arrElement[ptr_Que->LusFront];

		ptr_Que->LusFront = (ptr_Que->LusFront + 1)%(ptr_Que->LusCapacity);

		ptr_Que->LusSize = ptr_Que->LusSize - 1U;
		printf("Dequeued Element - %d \n",Lsi_Element);
		printf("New Size of Queue - %d \n",ptr_Que->LusSize);

	}
	else
	{

	}



	return (retVal);
}

StdRet_Type fPeekFirstElement(QueType* ptr_Que,sint32* ptr_LsiElement)
{
	StdRet_Type retVal = E_OK;
	sint32 Lsi_Element = 0;
	retVal = fIsQueueEmpty(ptr_Que);
	if(retVal != E_EMPTY)
	{
		Lsi_Element = ptr_Que->arrElement[ptr_Que->LusFront];

		if(ptr_LsiElement != NULL_PTR)
		{
			*ptr_LsiElement = Lsi_Element;
		}
		else
		{
			printf("\tFirst Element %d\n",Lsi_Element);
		}
	}
	else
	{

	}

	return (retVal);
}

StdRet_Type fPeekLastElement(QueType* ptr_Que,sint32* ptr_LsiElement)
{
	StdRet_Type retVal = E_OK;
	sint32 Lsi_Element = 0;
	retVal = fIsQueueEmpty(ptr_Que);
	if(retVal != E_EMPTY)
	{
		Lsi_Element = ptr_Que->arrElement[ptr_Que->LusRear];
		if(ptr_LsiElement != NULL_PTR)
		{
			*ptr_LsiElement = Lsi_Element;
		}
		else
		{
			printf("\tLastElement of Queue :%d\n",Lsi_Element);
		}
	}
	else
	{
	}

	return (retVal);
}

StdRet_Type fIsQueueEmpty(QueType* ptr_Que)
{
	StdRet_Type retVal = E_OK;
	if (ptr_Que-> LusSize == 0U)
	{
		retVal = E_EMPTY;
	}
	else
	{

	}
	return (retVal);
}

StdRet_Type fIsQueueFull(QueType* ptr_Que)
{
	StdRet_Type retVal = E_OK;
	if (ptr_Que-> LusCapacity == ptr_Que->LusSize)
	{
		retVal = E_FULL;
	}
	else
	{

	}
	return (retVal);
}
