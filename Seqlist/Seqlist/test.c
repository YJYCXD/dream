#define _CRT_SECURE_NO_WARNINGS 1
#include "seqlist.h"

void test1(SL* ps)
{
	SeqListInit(ps);
}

void test2(SL* ps)
{
	SeqListPushBack(ps, 1);
	SeqListPushBack(ps, 2);
	SeqListPushBack(ps, 3);
	SeqListPushBack(ps, 4);
	SeqListPushBack(ps, 5);
	SeqListPushBack(ps, 6);
	SeqListPushBack(ps, 7);
	SeqListPushBack(ps, 8);
	SeqListPushBack(ps, 9);

	SeqListPrint(ps);
	SeqListPopBack(ps);
	SeqListPopBack(ps);
	SeqListPrint(ps);


}



void test3(SL* ps)
{
	SeqListPushFront(ps, 5);
	SeqListPushFront(ps, 6);
	SeqListPushFront(ps, 7);
	SeqListPrint(ps);
	SeqListPopFront(ps);
	SeqListPopFront(ps);
	SeqListPopFront(ps);
	SeqListPrint(ps);



}

void test4(SL* ps)
{
	int ret = SeqListFindData(ps, 2);
	if (-1 == ret)
		printf("���ݲ�����\n");
	else
		printf("�����±�Ϊ%d\n", ret);
}

void test5(SL* ps)
{
	SeqListInsert(ps, 2, 10);
	SeqListInsert(ps, 6, 11);
	SeqListPrint(ps);
	SeqListErase(ps, 4);
	SeqListErase(ps, 5);
	SeqListPrint(ps);

}


void test6(SL* ps)
{
	SeqListDestory(ps);
}

int main()
{
	SL s;
	test1(&s);//��������˳����ʼ��
	test2(&s);//���ڲ���β���βɾ
	test3(&s);//���ڲ���ͷ��ͷɾ
	test4(&s);//����˳����������
	test5(&s);//����˳����м����ɾ��
	test6(&s);//˳�������
	return 0;
}