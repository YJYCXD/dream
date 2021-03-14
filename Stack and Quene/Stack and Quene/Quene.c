#define _CRT_SECURE_NO_WARNINGS 1
#include "Quene.h"


//队列初始化
void QueneInit(Quene* qp)
{ 
	assert(qp);
	//不能直接对head和tail直接解引用，否则会造成非法访问
	qp->_head = NULL;
	qp->_tail = NULL;
}

//增加队列节点
QNode* BuyQNode(QDataType x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	newnode->data = x;
	newnode->_next = NULL;
	return newnode;
}

//队尾入队列
void QuenePush(Quene* qp, QDataType data)
{
	assert(qp);
	QNode* newnode = BuyQNode(data);
	if (qp->_head == NULL)
	{
		qp->_head = qp->_tail = newnode;
	}
	else
	{
		qp->_tail->_next = newnode;
		qp->_tail = newnode;
	}
}

//队头出队列
void QueuePop(Quene* qp)
{
	assert(qp);
	assert(qp->_head);
	QNode* next = qp->_head->_next;
	free(qp->_head);
	qp->_head = next;
}

//获取队头元素
QDataType QueneFront(Quene* qp)
{
	assert(qp);
	return qp->_head->data;
}

//获取队尾元素
QDataType QueneBack(Quene* qp)
{
	assert(qp);
	return qp->_tail->data;
}

//获取队列中有效元素个数
int QueneSize(Quene* qp)
{
	assert(qp);
	QNode* cur = qp->_head;
	int count = 1;
	while (cur != qp->_tail)
		count++;
	return count;
}

//检测队列是否为空
int QueneEmpty(Quene* qp)
{
	assert(qp);
	if (qp->_head == NULL)
		return 0;
	return 1;

}

//销毁队列
void QueneDestory(Quene* qp)
{
	QNode* cur = qp->_head;
	while (cur != qp->_tail)
	{
		QNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	free(cur);
	cur = NULL;
}