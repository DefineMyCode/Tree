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

//前序
extern void PrevOrder(BTNode* root);

//中序
extern void InOrder(BTNode* root);

//后序
extern void PostOrder(BTNode* root);

//树中的节点个数
extern int TreeSize(BTNode* root);

//树中的节点个数
extern int TreeLeafSize(BTNode* root);

//广度优先（层序遍历）树中的节点个数
extern int BreadthTreeLeafSize(BTNode* root);
