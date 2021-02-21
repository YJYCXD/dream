#define _CRT_SECURE_NO_WARNINGS 1
#include "singlelist.h"


int main()
{
	SListNode* phead = NULL;//单链表最初是一个指针，指向开始的地址

	//测试单链表尾部插入数据和删除数据

	SingleListPushBack(&phead, 1);
	SingleListPushBack(&phead, 2);
	SingleListPushBack(&phead, 3);
	SingleListPushBack(&phead, 4);
	SingleListPrint(phead);
	SingleListPopBack(&phead);
	SingleListPopBack(&phead);
	SingleListPopBack(&phead);
	SingleListPopBack(&phead);
	SingleListPopBack(&phead);

	SingleListPrint(phead);


	//测试单链表头部插入数据和删除数据
	SingleListPushFront(&phead, -1);
	SingleListPushFront(&phead, -2);
	SingleListPushFront(&phead, -3);
	SingleListPushFront(&phead, -4);
	SingleListPushFront(&phead, -5);
	SingleListPrint(phead);
	//SingleListPopFront(&phead);
	//SingleListPopFront(&phead);
	//SingleListPopFront(&phead);
	//SingleListPopFront(&phead);
	//SingleListPopFront(&phead);
	//SingleListPopFront(&phead);
	SingleListPrint(phead);
	//测试在任意位置插入数据
	SingleListInsert()


	//测试单链表查找
	SListNode* pos = SListFind(phead, -2);
	printf("%p\n", pos);
	printf("该处的数据为%d\n", *pos);
	return 0;
}