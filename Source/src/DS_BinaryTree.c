/**********************************************************
 *  File Name:	DS_BinaryTree.c
 *  Created on: 05-Mar-2021
 *  Author: 	Atul.thakare001
 ***********************************************************/

#include "DS_BinaryTree.h"

BinTreeType* fCreateBinaryTree(sint32 Lsi_Element)
{
  BinTreeType* lptr_BinTree;

  lptr_BinTree = (BinTreeType* ) malloc(sizeof(struct Stag_BinTreeType));
  lptr_BinTree->Element = Lsi_Element;
  lptr_BinTree->leftElement = NULL_PTR;
  lptr_BinTree->rightElement = NULL_PTR;
  printf("Binary Tree created at Location %p",(void*)lptr_BinTree);
  return (lptr_BinTree);
}

void fPostOrderBT(BinTreeType* ptr_BT)
{
  if(ptr_BT != NULL_PTR)
  {

      fPostOrderBT(ptr_BT->leftElement);
      fPostOrderBT(ptr_BT->rightElement);
      printf("\t %d",ptr_BT->Element);

  }
}

void fInOrderBT(BinTreeType* ptr_BT)
{
  if(ptr_BT != NULL_PTR)
  {

      fInOrderBT(ptr_BT->leftElement);
      printf("\t %d",ptr_BT->Element);
      fInOrderBT(ptr_BT->rightElement);

  }
}

void fPreOrderBT(BinTreeType* ptr_BT)
{
  if(ptr_BT != NULL_PTR)
  {
      printf("\t %d",ptr_BT->Element);
      fPreOrderBT(ptr_BT->leftElement);
      fPreOrderBT(ptr_BT->rightElement);

  }
}

