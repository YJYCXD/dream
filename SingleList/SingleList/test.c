#define _CRT_SECURE_NO_WARNINGS 1
#include "singlelist.h"


int main()
{
	SListNode* phead = NULL;//�����������һ��ָ�룬ָ��ʼ�ĵ�ַ

	//���Ե�����β���������ݺ�ɾ������

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


	//���Ե�����ͷ���������ݺ�ɾ������
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
	//����������λ�ò�������
	SingleListInsert()


	//���Ե��������
	SListNode* pos = SListFind(phead, -2);
	printf("%p\n", pos);
	printf("�ô�������Ϊ%d\n", *pos);
	return 0;
}