//���е�ʵ��Ӧ����������Ϊ�����Ƕ�ͷ������β��

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

//���г�ʼ��
void QueneInit(Quene* qp);

//��β�����
void QuenePush(Quene* qp, QDataType data);

//��ͷ������
void QueuePop(Quene* qp);

//��ȡ��ͷԪ��
QDataType QueneFront(Quene* qp);

//��ȡ��βԪ��
QDataType QueneBack(Quene* qp);

//��ȡ��������ЧԪ�ظ���
int QueneSize(Quene* qp);

//�������Ƿ�Ϊ��
int QueneEmpty(Quene* qp);

//���ٶ���
void QueneDestory(Quene* qp);

//���Ӷ��нڵ�
QNode* BuyQNode(QDataType x);