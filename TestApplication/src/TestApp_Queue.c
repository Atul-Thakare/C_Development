/**********************************************************
 *  File Name:	TestApp_Queue.c
 *  Created on: 05-Mar-2021
 *  Author: 	Atul.thakare001
 ***********************************************************/
#include "TestApp_Queue.h"

void fTestQueue(void)
{
  QueType* ptr_MainQue;
  StdRet_Type retVal;
  printf("Queing \n");
  ptr_MainQue = fGenerateQue(&retVal,0x11U);
  fFillQue(ptr_MainQue);

  if(retVal == E_OK)
  {
      fDequeElement(ptr_MainQue);
      fEnqueElement(ptr_MainQue,0x43);

      fPeekFirstElement(ptr_MainQue,NULL_PTR);
      fPeekLastElement(ptr_MainQue, NULL_PTR);
      fDequeElement(ptr_MainQue);
      fEnqueElement(ptr_MainQue,-32);
      fPeekFirstElement(ptr_MainQue,NULL_PTR);
      fPeekLastElement(ptr_MainQue, NULL_PTR);
      fDequeElement(ptr_MainQue);
      fPeekFirstElement(ptr_MainQue,NULL_PTR);
      fPeekLastElement(ptr_MainQue, NULL_PTR);
      fPrintQueElements(ptr_MainQue);
  }
  else
  {
      printf("Error Occured in queue generation\n ");
  }
}
