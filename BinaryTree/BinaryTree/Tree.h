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

//ǰ��
extern void PrevOrder(BTNode* root);

//����
extern void InOrder(BTNode* root);

//����
extern void PostOrder(BTNode* root);

//���еĽڵ����
extern int TreeSize(BTNode* root);

//���еĽڵ����
extern int TreeLeafSize(BTNode* root);

//������ȣ�������������еĽڵ����
extern int BreadthTreeLeafSize(BTNode* root);
