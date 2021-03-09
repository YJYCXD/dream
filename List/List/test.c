#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

void test1(ListNode* phead)
{
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	Listprint(phead);
	ListPopBack(phead);
	ListPopBack(phead);
	Listprint(phead);

}

void test2(ListNode* phead)
{
	ListPushFront(phead, 1);
	ListPushFront(phead, 2);
	ListPushFront(phead, 3);
	ListPushFront(phead, 4);
	Listprint(phead);
	ListPopFront(phead);
	ListPopFront(phead);
	ListPopFront(phead);
	Listprint(phead);

}

//��ʵ��˫�������У�ͷ��β�塢ͷɾβɾ�����м����ɾ�����������
void test3(ListNode* phead)
{
	ListNode* pos = ListFind(phead, 2);
	ListInsert(pos, 200);
	ListErase(pos);
	Listprint(phead);

}

void test4(ListNode* phead)
{
	//β��
	ListPushBack1(phead, 1);
	ListPushBack1(phead, 2);
	ListPushBack1(phead, 3);
	ListPushBack1(phead, 4);
	Listprint(phead);
	//βɾ
	ListPopBack1(phead);
	ListPopBack1(phead);
	ListPopBack1(phead);
	Listprint(phead);
	//ͷ��
	ListPushFront1(phead, 5);
	ListPushFront1(phead, 6);
	ListPushFront1(phead, 7);
	ListPushFront1(phead, 8);
	Listprint(phead);
	//ͷɾ
	ListPopFront1(phead);
	ListPopFront1(phead);
	ListPopFront1(phead);
	ListPopFront1(phead);
	ListPopFront1(phead);
	ListPopFront1(phead);
	Listprint(phead);
}

void test5(ListNode* phead)
{
	ListClear(phead);
	ListPushBack(phead, 1);
	Listprint(phead);
}

int main()
{
	ListNode* phead = NULL;
	ListInit1(&phead);
	//����β�壬βɾ
	test1(phead);
	//����ͷ�壬ͷɾ
	test2(phead);
	//���Բ��ҡ��м���롢�м�ɾ��
	test3(phead);
	//���������м����ɾ����ʵ��ͷβ����ɾ��
	test4(phead);
	//��������ڵ㸴��
	test5(phead);
	//��������
	ListDestory(phead);
	return 0;
}