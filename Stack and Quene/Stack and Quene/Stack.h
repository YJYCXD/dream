//�ܹ���̬������ջ
//ջӦ����������ʵ�֣���Ϊջֻ�ܴ�ջ��������������۽�С

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;
	int _capacity;
}Stack;

//ջ�ĳ�ʼ��
void StackInit(Stack* ps);

//��ջ
void StackPush(Stack* ps, STDataType data);

//��ջ
void StackPop(Stack* ps);

//��ȡջ��Ԫ��
STDataType StackTop(Stack* ps);

//��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps);

///���ջ�Ƿ�Ϊ�գ��շ��ط�0���ǿշ���0
int StackEmpty(Stack* ps);

//����ջ
void StackDestory(Stack* ps);