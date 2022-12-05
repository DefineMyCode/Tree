#include "Tree.h"
#include "Queue.h"

//前序
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

//中序
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}

//后序
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}

//树中的节点个数
int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return TreeSize(root->left) + TreeSize(root->right) + 1;
}

//树中的节点个数
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

//广度优先（层序遍历）树中的节点个数
int BreadthTreeLeafSize(BTNode* root)
{
	int size=0;
	Queue q;
	QueueInit(&q);
	if(root!=NULL)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front=QueueFront(&q);
		QueuePop(&q);
		size++;
		if (front->left != NULL)
		{
			QueuePush(&q, front->left);
		}
		if (front->right != NULL)
		{
			QueuePush(&q, front->right);
		}
	}
	return size;
}
