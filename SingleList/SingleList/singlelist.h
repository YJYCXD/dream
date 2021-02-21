#include <stdio.h>
#include <stdlib.h>
typedef int SingleListDataType;

typedef struct SListNode
{
	SingleListDataType data;
	struct SListNode* next;
}SListNode;


//单链表尾部插入数据
void SingleListPushBack(SListNode** pphead, SingleListDataType data);

//单链表尾部删除数据
void SingleListPopBack(SListNode** pphead);

//单链表头部插入数据
void SingleListPushFront(SListNode** pphead, SingleListDataType data);

//单链表头部删除数据
void SingleListPopFront(SListNode** pphead);

//在pos位置插入数据


//打印单链表
void SingleListPrint(SListNode* phead);

//创建新节点
SListNode* BuySLiseNode(SingleListDataType data);

//单链表查找
SListNode* SListFind(SListNode* phead, SingleListDataType data);