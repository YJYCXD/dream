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
		SListNode* tail = *pphead;//����ö���ָ��������tail��tail������ľ���pphead�ĵ�ַ��������nextָ��ĵ�ַ
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = NewNode;
	}
	
}

void SingleListPopBack(SListNode** pphead)
{
	//��Ϊ�������
	//1��������
	if (*pphead == NULL)
	{
		return;
	}
	//2��������ֻ��һ�����ݣ�����Ҫ����
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3�������д���һ�����ݣ���Ҫ����
	else
	{
		//�������β��ɾ�����ҵ�NULL���ͷŸô��ĵ�ַ����Ҫ��������
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
	//�������
	//1����
	if (*pphead == NULL)
	{
		return;
	}
	//2��һ������
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	//3���������
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
	while (cur != NULL)//��cur->next��=NULL������һ��ѭ��
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}