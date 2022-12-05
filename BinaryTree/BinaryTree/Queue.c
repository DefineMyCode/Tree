#include "Queue.h"

//初始化队列
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}

//队尾插入数据
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
	else//队列没有数据
	{
		pq->head = newnode;
		pq->tail = newnode;
	}
}

//队头删除数据
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);//队中没有数据了
	if (pq->head->next != NULL)//队中有多个数据
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	else//队中仅有一个数据
	{
		free(pq->head);
		pq->head = NULL;
		pq->tail = NULL;
	}
}

//检查队列是否为空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}

//返回队中的数据个数
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

//返回队头数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);//队头不能为空
	return pq->head->data;
}

//返回队尾数据
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->tail);//队尾不能为空
	return pq->tail->data;
}

//销毁队列
void QueueDestroy(Queue* pq)
{
	assert(pq);
	assert(pq->head);//无数据无需销毁
	while (!QueueEmpty(pq))
	{
		QueuePop(pq);
	}
}