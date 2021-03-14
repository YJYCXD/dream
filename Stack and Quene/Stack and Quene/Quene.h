//队列的实现应该用链表，因为队列是队头进，队尾出

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int QDataType;

typedef struct QueneNode
{
	QDataType data;
	struct QueneNode* _next;
}QNode;

typedef struct Quene
{
	QNode* _head;
	QNode* _tail;
}Quene;

//队列初始化
void QueneInit(Quene* qp);

//队尾入队列
void QuenePush(Quene* qp, QDataType data);

//队头出队列
void QueuePop(Quene* qp);

//获取队头元素
QDataType QueneFront(Quene* qp);

//获取队尾元素
QDataType QueneBack(Quene* qp);

//获取队列中有效元素个数
int QueneSize(Quene* qp);

//检测队列是否为空
int QueneEmpty(Quene* qp);

//销毁队列
void QueneDestory(Quene* qp);

//增加队列节点
QNode* BuyQNode(QDataType x);