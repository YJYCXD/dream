#define _CRT_SECURE_NO_WARNINGS 1
#include "Quene.h"


//���г�ʼ��
void QueneInit(Quene* qp)
{ 
	assert(qp);
	//����ֱ�Ӷ�head��tailֱ�ӽ����ã��������ɷǷ�����
	qp->_head = NULL;
	qp->_tail = NULL;
}

//���Ӷ��нڵ�
QNode* BuyQNode(QDataType x)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	newnode->data = x;
	newnode->_next = NULL;
	return newnode;
}

//��β�����
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

//��ͷ������
void QueuePop(Quene* qp)
{
	assert(qp);
	assert(qp->_head);
	QNode* next = qp->_head->_next;
	free(qp->_head);
	qp->_head = next;
}

//��ȡ��ͷԪ��
QDataType QueneFront(Quene* qp)
{
	assert(qp);
	return qp->_head->data;
}

//��ȡ��βԪ��
QDataType QueneBack(Quene* qp)
{
	assert(qp);
	return qp->_tail->data;
}

//��ȡ��������ЧԪ�ظ���
int QueneSize(Quene* qp)
{
	assert(qp);
	QNode* cur = qp->_head;
	int count = 1;
	while (cur != qp->_tail)
		count++;
	return count;
}

//�������Ƿ�Ϊ��
int QueneEmpty(Quene* qp)
{
	assert(qp);
	if (qp->_head == NULL)
		return 0;
	return 1;

}

//���ٶ���
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