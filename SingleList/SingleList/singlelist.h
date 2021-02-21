#include <stdio.h>
#include <stdlib.h>
typedef int SingleListDataType;

typedef struct SListNode
{
	SingleListDataType data;
	struct SListNode* next;
}SListNode;


//������β����������
void SingleListPushBack(SListNode** pphead, SingleListDataType data);

//������β��ɾ������
void SingleListPopBack(SListNode** pphead);

//������ͷ����������
void SingleListPushFront(SListNode** pphead, SingleListDataType data);

//������ͷ��ɾ������
void SingleListPopFront(SListNode** pphead);

//��posλ�ò�������


//��ӡ������
void SingleListPrint(SListNode* phead);

//�����½ڵ�
SListNode* BuySLiseNode(SingleListDataType data);

//���������
SListNode* SListFind(SListNode* phead, SingleListDataType data);