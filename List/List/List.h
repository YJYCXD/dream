#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//������������
typedef int LDataType;

//����˫��ṹ��
typedef struct ListNode
{
	int data;
	struct ListNode* pre;
	struct ListNode* next;
}ListNode;

//��ʼ��ͷ�ڵ�
void ListInit1(ListNode** pphead);//������ָ�룬ֱ����phead�Ϸ���ռ�
ListNode* ListInit2(ListNode* phead);//������Ŀռ䷵�أ���Ϊͷ�ڵ�

//�����µĽڵ�
ListNode* BuyNewnode(LDataType x);

//β��
void ListPushBack(ListNode* phead, LDataType data);

//βɾ
void ListPopBack(ListNode* phead);

//ͷ��
void ListPushFront(ListNode* phead, LDataType data);

//ͷɾ
void ListPopFront(ListNode* phead);

//���ҽڵ�
ListNode* ListFind(ListNode* phead, LDataType x);

//�м����
void ListInsert(ListNode* pos, LDataType data);

//�м�ɾ��
void ListErase(ListNode* pos);

//�����м����ʵ��ͷβ����ɾ��
void ListPushBack1(ListNode* phead, LDataType data);
void ListPopBack1(ListNode* phead);
void ListPushFront1(ListNode* phead, LDataType data);
void ListPopFront1(ListNode* phead);

//��ӡ˫������
void Listprint(ListNode* phead);

//����˫������
//1��������ͷ�ڵ�
void ListClear(ListNode* phead);
//2������������������ͷ�ڵ�
void ListDestory(ListNode* phead);