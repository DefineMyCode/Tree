#include "Queue.h"

//��ʼ������
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}

//��β��������
extern void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	if (pq->head != NULL)
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
	else//����û������
	{
		pq->head = newnode;
		pq->tail = newnode;
	}
}

//��ͷɾ������
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);//����û��������
	if (pq->head->next != NULL)//�����ж������
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	else//���н���һ������
	{
		free(pq->head);
		pq->head = NULL;
		pq->tail = NULL;
	}
}

//�������Ƿ�Ϊ��
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}

//���ض��е����ݸ���
int QueueSize(Queue* pq)
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->head;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

//���ض�ͷ����
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);//��ͷ����Ϊ��
	return pq->head->data;
}

//���ض�β����
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->tail);//��β����Ϊ��
	return pq->tail->data;
}

//���ٶ���
void QueueDestroy(Queue* pq)
{
	assert(pq);
	assert(pq->head);//��������������
	while (!QueueEmpty(pq))
	{
		QueuePop(pq);
	}
}