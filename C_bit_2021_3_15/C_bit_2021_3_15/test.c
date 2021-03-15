#define _CRT_SECURE_NO_WARNINGS 1

//�ö���ʵ��ջ

//���е�ʵ��Ӧ����������Ϊ�����Ƕ�ͷ������β��

//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//
//typedef int QDataType;
//
//typedef struct QueneNode
//{
//	QDataType data;
//	struct QueneNode* _next;
//}QNode;
//
//typedef struct Quene
//{
//	QNode* _head;
//	QNode* _tail;
//}Quene;
//
////���г�ʼ��
//void QueneInit(Quene* qp);
//
////��β�����
//void QuenePush(Quene* qp, QDataType data);
//
////��ͷ������
//void QuenePop(Quene* qp);
//
////��ȡ��ͷԪ��
//QDataType QueneFront(Quene* qp);
//
////��ȡ��βԪ��
//QDataType QueneBack(Quene* qp);
//
////��ȡ��������ЧԪ�ظ���
//int QueneSize(Quene* qp);
//
////�������Ƿ�Ϊ��
//int QueneEmpty(Quene* qp);
//
////���ٶ���
//void QueneDestory(Quene* qp);
//
////���Ӷ��нڵ�
//QNode* BuyQNode(QDataType x);
//
//
////���г�ʼ��
//void QueneInit(Quene* qp)
//{
//	assert(qp);
//	//����ֱ�Ӷ�head��tailֱ�ӽ����ã��������ɷǷ�����
//	qp->_head = NULL;
//	qp->_tail = NULL;
//}
//
////���Ӷ��нڵ�
//QNode* BuyQNode(QDataType x)
//{
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	newnode->data = x;
//	newnode->_next = NULL;
//	return newnode;
//}
//
////��β�����
//void QuenePush(Quene* qp, QDataType data)
//{
//	assert(qp);
//	QNode* newnode = BuyQNode(data);
//	if (qp->_head == NULL)
//	{
//		qp->_head = qp->_tail = newnode;
//	}
//	else
//	{
//		qp->_tail->_next = newnode;
//		qp->_tail = newnode;
//	}
//}
//
////��ͷ������
//void QuenePop(Quene* qp)
//{
//	assert(qp);
//	assert(qp->_head);
//	QNode* next = qp->_head->_next;
//	free(qp->_head);
//	qp->_head = next;
//}
//
////��ȡ��ͷԪ��
//QDataType QueneFront(Quene* qp)
//{
//	assert(qp);
//	return qp->_head->data;
//}
//
////��ȡ��βԪ��
//QDataType QueneBack(Quene* qp)
//{
//	assert(qp);
//	return qp->_tail->data;
//}
//
////��ȡ��������ЧԪ�ظ���
//int QueneSize(Quene* qp)
//{
//	assert(qp);
//	QNode* cur = qp->_head;
//	int count = 1;
//	while (cur != qp->_tail)
//		count++;
//	return count;
//}
//
////�������Ƿ�Ϊ��
//int QueneEmpty(Quene* qp)
//{
//	assert(qp);
//	if (qp->_head == NULL)
//		return 0;
//	return 1;
//
//}
//
////���ٶ���
//void QueneDestory(Quene* qp)
//{
//	QNode* cur = qp->_head;
//	while (cur != qp->_tail)
//	{
//		QNode* next = cur->_next;
//		free(cur);
//		cur = next;
//	}
//	free(cur);
//	cur = NULL;
//}
//
//
//
//typedef struct MyStack{
//	Quene q1;
//	Quene q2;
//} MyStack;
//
///** Initialize your data structure here. */
//
//MyStack* myStackCreate() {
//	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));//Ϊջ���ٿռ�
//	//��q1��q2��ʼ��
//	QueneInit(&(obj->q1));
//	QueneInit(&(obj->q2));
//	return obj;
//}
//
///** Push element x onto stack. */
//void myStackPush(MyStack* obj, int x) {
//	if (QueneEmpty(&(obj->q1)))
//	{
//		QuenePush(&(obj->q1), x);
//	}
//	else
//	{
//		QuenePush(&(obj->q2), x);
//	}
//}
//
///** Removes the element on top of the stack and returns that element. */
//int myStackPop(MyStack* obj) {
//	int data = 0;
//	if (QueneEmpty(&(obj->q1)))
//	{
//		while (obj->q1._head != obj->q1._tail)
//		{
//			QuenePush(&(obj->q2), obj->q1._head->data);
//			QuenePop(&(obj->q1));
//		}
//		data = obj->q1._tail->data;
//		QuenePop(&(obj->q1));
//	}
//	else
//	{
//		while (obj->q2._head != obj->q2._tail)
//		{
//			QuenePush(&(obj->q1), obj->q2._head->data);
//			QuenePop(&(obj->q2));
//		}
//		data = obj->q2._tail->data;
//		QuenePop(&(obj->q2));
//	}
//	return data;
//}
//
///** Get the top element. */
//int myStackTop(MyStack* obj) {
//	if (QueneEmpty(&(obj->q1)))
//	{
//		return obj->q1._tail->data;
//	}
//	else
//	{
//		return obj->q2._tail->data;
//	}
//}
//
///** Returns whether the stack is empty. */
//bool myStackEmpty(MyStack* obj) {
//	if (QueneEmpty(&(obj->q1)) || QueneEmpty(&(obj->q2)))
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//
//}
//
//void myStackFree(MyStack* obj) {
//	if (QueneEmpty(&(obj->q1)))
//		QueneDestory(&(obj->q1));
//	if (QueneEmpty((&(obj->q2))))
//		QueneDestory(&(obj->q2));
//	free(obj);
//	obj = NULL;
//
//}
//
///**
//* Your MyStack struct will be instantiated and called as such:
//* MyStack* obj = myStackCreate();
//* myStackPush(obj, x);
//
//* int param_2 = myStackPop(obj);
//
//* int param_3 = myStackTop(obj);
//
//* bool param_4 = myStackEmpty(obj);
//
//* myStackFree(obj);
//*/


#include <stdio.h>
int main()
{
	int* arr = (int*)calloc(10, sizeof(int));
	if (arr == NULL)
	{
		printf("�ڴ濪��ʧ��\n");
		exit(-1);
	}
	return 0;
}

//�������

char * countAndSay(int n){
	if (n == 1)
		return "1";
	char* str = (char*)malloc(sizeof(char) * 1000);
	str[0] = '1';
	str[1] = '\0';
	int cur = 0;
	int next = 1;
	int count = 1;
	int i = 0;
	char c = 0;
	while (--n)
	{
		cur = 0;
		next = 1;
		i = 0;
		while (str[next])
		{
			count = 1;
			if (str[cur] == str[next])
			{
				while (str[cur] == str[next])
				{
					cur++;
					next++;
					count++;
				}
				c = str[cur];
				str[i] = count + '0';
				str[i + 1] = c;
				i += 2;
			}
			else
			{
				c = str[cur];
				str[i] = count + '0';
				str[i + 1] = c;
				i += 2;
				cur++;
				next++;
			}

		}
		if (count == 1)
		{
			c = str[cur];
			str[i] = count + '0';
			str[i + 1] = c;
			i += 2;
		}
		str[i] = '\0';
	}
	return str;

}