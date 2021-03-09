#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

void ListInit1(ListNode** pphead)
{
	assert(pphead);
	*pphead = BuyNewnode(0);
	(*pphead)->next = *pphead;
	(*pphead)->pre = *pphead;
}

ListNode* ListInit2(ListNode* phead)
{
	assert(phead);
	phead = BuyNewnode(0);
	phead->next = phead;
	phead->pre = phead;
	return phead;
}

void Listprint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

ListNode* BuyNewnode(LDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->pre = NULL;
	newnode->data = x;
	return newnode;
}

void ListPushBack(ListNode* phead, LDataType data)
{
	assert(phead);
	ListNode* newnode = BuyNewnode(data);
	ListNode* tail = phead->pre;
	tail->next = newnode;
	newnode->pre = tail;
	phead->pre = newnode;
	newnode->next = phead;
}

void ListPopBack(ListNode* phead)
{
	assert(phead);
	//还要考虑删到只剩下头节点,不能把头节点也删除
	assert(phead->next != phead);
	ListNode* tail = phead->pre;
	ListNode* tail_pre = tail->pre;
	phead->pre = tail_pre;
	tail_pre->next = phead;
	free(tail);
	tail = NULL;
}

void ListPushFront(ListNode* phead, LDataType data)
{
	assert(phead);
	ListNode* newnode = BuyNewnode(data);
	ListNode* first = phead->next;
	phead->next = newnode;
	newnode->pre = phead;
	newnode->next = first;
	first->pre = newnode;
}

void ListPopFront(ListNode* phead)
{
	assert(phead);
	//同样要注意不能删除头节点
	assert(phead->next != phead);

	ListNode* first = phead->next;
	ListNode* second = first->next;
	phead->next = second;
	second->pre = phead;
	free(first);
	first = NULL;

}


ListNode* ListFind(ListNode* phead, LDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;

		cur = cur->next;
	}
	return NULL;
}

void ListErase(ListNode* pos)
{
	assert(pos);
	assert(pos->next != pos);
	ListNode* pospre = pos->pre;
	ListNode* posnext = pos->next;
	pospre->next = posnext;
	posnext->pre = pospre;
	free(pos);
	pos = NULL;
}


void ListInsert(ListNode* pos, LDataType data)
{
	assert(pos);
	ListNode* newnode = BuyNewnode(data);
	ListNode* pospre = pos->pre;
	pospre->next = newnode;
	newnode->pre = pospre;
	newnode->next = pos;
	pos->pre = newnode;
}

void ListPushBack1(ListNode* phead, LDataType data)
{
	assert(phead);
	ListInsert(phead, data);
}

void ListPopBack1(ListNode* phead)
{
	assert(phead);
	ListErase(phead->pre);
}

void ListPushFront1(ListNode* phead, LDataType data)
{
	assert(phead);
	ListInsert(phead->next, data);
}

void ListPopFront1(ListNode* phead)
{
	assert(phead);
	ListErase(phead->next);
}

void ListClear(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	ListNode* next = cur->next;
	while (cur != phead)
	{
		free(cur);
		cur = next;
		next = cur->next;
	}
	phead->pre = phead;
	phead->next = phead;
}

void ListDestory(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	ListNode* next = cur->next;
	while (cur != phead)
	{
		free(cur);
		cur = next;
		next = cur->next;
	}
	free(phead);
	phead = NULL;
}