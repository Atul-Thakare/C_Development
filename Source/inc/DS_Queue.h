/**********************************************************
 *  File Name:	DS_Queue.h
 *  Created on: 05-Mar-2021
 *  Author: 	Atul.thakare001
 ***********************************************************/

#ifndef SOURCE_INC_DS_QUEUE_H_
#define SOURCE_INC_DS_QUEUE_H_


#include "Common_Def.h"

typedef struct Stag_QueType
{
  uint16 LusFront;
  uint16 LusRear;
  uint16 LusSize;
  uint16 LusCapacity;
  sint32* arrElement;
}QueType;

extern QueType* fGenerateQue(StdRet_Type* ptr_retVal ,uint16 Lus_size);
extern StdRet_Type fEnqueElement(QueType* ptr_Que,sint32 Lsi_Element);
extern StdRet_Type fDequeElement(QueType* ptr_Que);
extern StdRet_Type fPeekFirstElement(QueType* ptr_Que,sint32* ptr_LsiElement);
extern StdRet_Type fPeekLastElement(QueType* ptr_Que,sint32* ptr_LsiElement);
extern StdRet_Type fIsQueueEmpty(QueType* ptr_Que);
extern StdRet_Type fIsQueueFull(QueType* ptr_Que);
extern void fPrintQueElements(QueType* ptr_Que);
extern void fFillQue(QueType* lptr_Que);


#endif /* SOURCE_INC_DS_QUEUE_H_ */
