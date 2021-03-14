#define _CRT_SECURE_NO_WARNINGS 1


#include "Stack.h"
#include "Quene.h"

void test1(Stack* ps)
{
	StackPush(ps, 1);
	StackPush(ps, 2);
	printf("%d ", StackTop(ps));
	StackPop(ps);
	StackPush(ps, 3);
	StackPush(ps, 4);
	while (StackEmpty(ps))
	{
		printf("%d ", StackTop(ps));
		StackPop(ps);
	}
}

void test2(Quene* qp)
{
	QuenePush(qp, 1);
	QuenePush(qp, 2);
	printf("%d ", QueneFront(qp));
	QueuePop(qp);
	QuenePush(qp, 3);
	QuenePush(qp, 4);
	while (QueneEmpty(qp))
	{
		printf("%d ", QueneFront(qp));
		QueuePop(qp);
	}
}


int main()
{
	Stack stack;
	Quene quene;
	StackInit(&stack);
	QueneInit(&quene);
	//测试入栈出栈
	//test1(&stack);
	//测试入队出队
	test2(&quene);
	return 0;
}