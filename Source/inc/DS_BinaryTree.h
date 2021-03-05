/**********************************************************
 *  File Name:	DS_BinaryTree.h
 *  Created on: 05-Mar-2021
 *  Author: 	Atul.thakare001
 ***********************************************************/

#ifndef SOURCE_INC_DS_BINARYTREE_H_
#define SOURCE_INC_DS_BINARYTREE_H_

#include "Common_Def.h"

struct Stag_BinTreeType
{
    sint32 Element;
    struct Stag_BinTreeType * leftElement;
    struct Stag_BinTreeType * rightElement;
};

typedef struct Stag_BinTreeType BinTreeType;



extern void fPreOrderBT(BinTreeType* ptr_BT);
extern void fInOrderBT(BinTreeType* ptr_BT);
extern void fPostOrderBT(BinTreeType* ptr_BT);
BinTreeType* fCreateBinaryTree(sint32 Lsi_Element);


#endif /* SOURCE_INC_DS_BINARYTREE_H_ */
