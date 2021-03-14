#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"
//ջ�ĳ�ʼ��
void StackInit(Stack* ps)
{
	assert(ps);
	ps->_a = (STDataType*)malloc(sizeof(STDataType) * 4);
	ps->_top = 0;
	ps->_capacity = 4;
}

//��ջ
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		ps->_capacity *= 2;
		STDataType* ptr = (STDataType*)realloc(ps, sizeof(STDataType) * ps->_capacity);
		if (ptr == NULL)
		{
			printf("�ڴ治��\n");
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

//��ջ
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->_top >= 0);
	ps->_top--;
}

//��ȡջ��Ԫ��
STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}

//��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}

///���ջ�Ƿ�Ϊ�գ��շ��ط�0���ǿշ���0
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->_top;
}

//����ջ
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps);
	ps = NULL;
}