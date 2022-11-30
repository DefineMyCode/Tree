#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

//«∞–Ú
extern void PrevOrder(BTNode* root);

//÷––Ú
extern void InOrder(BTNode* root);

//∫Û–Ú
extern void PostOrder(BTNode* root);

