#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"
//栈的初始化
void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = (STDataType*)malloc(sizeof(STDataType) * 4);
	ps->_top = 0;
	ps->_capacity = 4;
}

//入栈
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		ps->_capacity *= 2;
		STDataType* ptr = (STDataType*)realloc(ps, sizeof(STDataType) * ps->_capacity);
		if (ptr == NULL)
		{
			printf("内存不足\n");
			exit(-1);
		}
		else
		{
			ps->_a = ptr;
		}
	}
	ps->_a[ps->_top] = data;
	ps->_top++;
}

//出栈
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->_top >= 0);
	ps->_top--;
}

//获取栈顶元素
STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}

//获取栈中有效元素个数
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}

///检测栈是否为空，空返回非0，非空返回0
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top;
}

//销毁栈
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps);
	ps = NULL;
}