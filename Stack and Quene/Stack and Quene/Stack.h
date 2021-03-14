//能够动态增长的栈
//栈应该用数组来实现，因为栈只能从栈顶出，用数组代价较小

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

//栈的初始化
void StackInit(Stack* ps);

//入栈
void StackPush(Stack* ps, STDataType data);

//出栈
void StackPop(Stack* ps);

//获取栈顶元素
STDataType StackTop(Stack* ps);

//获取栈中有效元素个数
int StackSize(Stack* ps);

///检测栈是否为空，空返回非0，非空返回0
int StackEmpty(Stack* ps);

//销毁栈
void StackDestory(Stack* ps);