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

//其实在双向链表中，头插尾插、头删尾删都是中间插入删除的特殊情况
void test3(ListNode* phead)
{
	ListNode* pos = ListFind(phead, 2);
	ListInsert(pos, 200);
	ListErase(pos);
	Listprint(phead);

}

void test4(ListNode* phead)
{
	//尾插
	ListPushBack1(phead, 1);
	ListPushBack1(phead, 2);
	ListPushBack1(phead, 3);
	ListPushBack1(phead, 4);
	Listprint(phead);
	//尾删
	ListPopBack1(phead);
	ListPopBack1(phead);
	ListPopBack1(phead);
	Listprint(phead);
	//头插
	ListPushFront1(phead, 5);
	ListPushFront1(phead, 6);
	ListPushFront1(phead, 7);
	ListPushFront1(phead, 8);
	Listprint(phead);
	//头删
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
	//测试尾插，尾删
	test1(phead);
	//测试头插，头删
	test2(phead);
	//测试查找、中间插入、中间删除
	test3(phead);
	//测试利用中间插入删除来实现头尾插入删除
	test4(phead);
	//测试清除节点复用
	test5(phead);
	//销毁链表
	ListDestory(phead);
	return 0;
}