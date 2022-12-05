#pragma once
#include "Tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>	
#include <stdbool.h>

//Queue�е���������
typedef BTNode* QDataType;

//Queue�еĽڵ�(������)
typedef struct QNode 
{
	struct QNode* next;
	QDataType data;
}QNode;

//Queue����
typedef struct Queue
{
	//��ͷ
	QNode* head;
	//��β
	QNode* tail;
}Queue;

//��ʼ������
extern void QueueInit(Queue* pq);

//��β��������
extern void QueuePush(Queue* pq, QDataType x);

//��ͷɾ������
extern void QueuePop(Queue* pq);

//�������Ƿ�Ϊ��
extern bool QueueEmpty(Queue* pq);

//���ض�ͷ����
extern QDataType QueueFront(Queue* pq);

//���ض�β����
extern QDataType QueueBack(Queue* pq);

//���ض��е����ݸ���
extern int QueueSize(Queue* pq);

//���ٶ���
extern void QueueDestroy(Queue* pq);