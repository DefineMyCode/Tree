#include "Tree.h"
#include "Queue.h"

int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = A->right = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = E->right = NULL;

	BTNode* F = (BTNode*)malloc(sizeof(BTNode));
	F->data = 'F';
	F->left = F->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;
	C->right = F;

	//PrevOrder(A);
	//printf("\n");

	//InOrder(A);
	//printf("\n");

	//PostOrder(A);
	//
	//printf("\n");

	printf("TreeSize=%d\n", TreeSize(A));
	//printf("TreeLeafSize=%d\n", TreeLeafSize(A));
	printf("BreadthTreeLeafSize=%d\n", BreadthTreeLeafSize(A));

	return 0;
}