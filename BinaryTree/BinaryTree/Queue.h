#pragma once
#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>	
#include <stdbool.h>

//Queue中的数据类型
typedef BTNode* QDataType;

//Queue中的节点(单链表)
typedef struct QNode 
{
	struct QNode* next;
	QDataType data;
}QNode;

//Queue队列
typedef struct Queue
{
	//队头
	QNode* head;
	//队尾
	QNode* tail;
}Queue;

//初始化队列
extern void QueueInit(Queue* pq);

//队尾插入数据
extern void QueuePush(Queue* pq, QDataType x);

//队头删除数据
extern void QueuePop(Queue* pq);

//检查队列是否为空
extern bool QueueEmpty(Queue* pq);

//返回队头数据
extern QDataType QueueFront(Queue* pq);

//返回队尾数据
extern QDataType QueueBack(Queue* pq);

//返回队中的数据个数
extern int QueueSize(Queue* pq);

//销毁队列
extern void QueueDestroy(Queue* pq);