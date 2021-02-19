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
		printf("数据不存在\n");
	else
		printf("数据下标为%d\n", ret);
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
	test1(&s);//用来测试顺序表初始化
	test2(&s);//用于测试尾插和尾删
	test3(&s);//用于测试头插头删
	test4(&s);//测试顺序表查找数据
	test5(&s);//测试顺序表中间插入删除
	test6(&s);//顺序表销毁
	return 0;
}