#define _CRT_SECURE_NO_WARNINGS 1

#include "singlelist.h"


SListNode* BuySLiseNode(SingleListDataType data)
{
	SListNode* Node = (SListNode*)malloc(sizeof(SListNode));
	Node->data = data;
	Node->next = NULL;
	return Node;
}

void SingleListPushBack(SListNode** pphead, SingleListDataType data)
{
	
	SListNode* NewNode = BuySLiseNode(data);
	if (*pphead == NULL)
	{
		*pphead = NewNode;
	}
	else
	{
		SListNode* tail = *pphead;//如果用二级指针来定义tail，tail所代表的就是pphead的地址，而不是next指向的地址
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = NewNode;
	}
	
}

void SingleListPopBack(SListNode** pphead)
{
	//分为三种情况
	//1、空链表
	if (*pphead == NULL)
	{
		return;
	}
	//2、链表中只有一个数据，不需要遍历
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3、链表中大于一个数据，需要遍历
	else
	{
		//多个数据尾部删除，找到NULL，释放该处的地址，需要两个变量
		SListNode* cur= *pphead;
		SListNode* prev = NULL;
		while (cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;
		}
		free(prev->next);
		prev->next = NULL;
	}
}

void SingleListPushFront(SListNode** pphead, SingleListDataType data)
{
	SListNode* NewNode = BuySLiseNode(data);
	if (*pphead == NULL)
	{
		*pphead = NewNode;
	}
	else
	{
		NewNode->next = *pphead;
		*pphead = NewNode;

	}
}

void SingleListPopFront(SListNode** pphead)
{
	//三种情况
	//1、空
	if (*pphead == NULL)
	{
		return;
	}
	//2、一个数据
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3、多个数据
	else
	{
		SListNode* cur = (*pphead)->next;
		free(*pphead);
		*pphead = cur;
	}
}


SListNode* SListFind(SListNode* phead, SingleListDataType data)
{
	if (phead == NULL)
	{
		return NULL;
	}
	else
	{
		SListNode* cur = phead;
		while (cur != NULL)
		{
			if (cur->data == data)
				return cur;
			else
			{
				cur = cur->next;
			}
		}
		return NULL;
	}
}


void SingleListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)//用cur->next！=NULL会少走一层循环
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}