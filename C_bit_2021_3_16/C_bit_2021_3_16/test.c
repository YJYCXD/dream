#define _CRT_SECURE_NO_WARNINGS 1

//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* _a;
//	int _top;
//	int _capacity;
//}Stack;
//
////栈的初始化
//void StackInit(Stack* ps);
//
////入栈
//void StackPush(Stack* ps, STDataType data);
//
////出栈
//void StackPop(Stack* ps);
//
////获取栈顶元素
//STDataType StackTop(Stack* ps);
//
////获取栈中有效元素个数
//int StackSize(Stack* ps);
//
/////检测栈是否为空，空返回非0，非空返回0
//int StackEmpty(Stack* ps);
//
////销毁栈
//void StackDestory(Stack* ps);
//
////栈的初始化
//void StackInit(Stack* ps)
//{
//	assert(ps);
//	ps->_a = (STDataType*)malloc(sizeof(STDataType) * 4);
//	ps->_top = 0;
//	ps->_capacity = 4;
//}
//
////入栈
//void StackPush(Stack* ps, STDataType data)
//{
//	assert(ps);
//	if (ps->_top == ps->_capacity)
//	{
//		ps->_capacity *= 2;
//		STDataType* ptr = (STDataType*)realloc(ps, sizeof(STDataType) * ps->_capacity);
//		if (ptr == NULL)
//		{
//			printf("内存不足\n");
//			exit(-1);
//		}
//		else
//		{
//			ps->_a = ptr;
//		}
//	}
//	ps->_a[ps->_top] = data;
//	ps->_top++;
//}
//
////出栈
//void StackPop(Stack* ps)
//{
//	assert(ps);
//	assert(ps->_top >= 0);
//	ps->_top--;
//}
//
////获取栈顶元素
//STDataType StackTop(Stack* ps)
//{
//	assert(ps);
//	return ps->_a[ps->_top - 1];
//}
//
////获取栈中有效元素个数
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->_top;
//}
//
/////检测栈是否为空，空返回非0，非空返回0
//int StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->_top;
//}
//
////销毁栈
//void StackDestory(Stack* ps)
//{
//	assert(ps);
//	free(ps);
//	ps = NULL;
//}
//
//
//typedef struct {
//	Stack s1;
//	Stack s2;
//} MyQueue;
//
///** Initialize your data structure here. */
//
//MyQueue* myQueueCreate() {
//	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&(obj->s1));
//	StackInit(&(obj->s2));
//	return obj;
//}
//
///** Push element x to the back of queue. */
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&(obj->s1), x);
//}
//
///** Removes the element from in front of queue and returns that element. */
//int myQueuePop(MyQueue* obj) {
//
//	int num = 0;
//	while (obj->s1._top - 1)
//	{
//		StackPush(&(obj->s2), obj->s1._a[obj->s1._top - 1]);
//		StackPop(&(obj->s1));
//	}
//	num = obj->s1._a[obj->s1._top - 1];
//	StackPop(&(obj->s1));
//	if (obj->s2._top)
//	{
//		while (obj->s2._top - 1)
//		{
//			StackPush(&(obj->s1), obj->s2._a[obj->s2._top - 1]);
//			StackPop(&(obj->s2));
//		}
//		StackPush(&(obj->s1), obj->s2._a[obj->s2._top - 1]);
//		StackPop(&(obj->s2));
//
//	}
//	return num;
//}
//
///** Get the front element. */
//int myQueuePeek(MyQueue* obj) {
//	return obj->s1._a[0];
//}
//
///** Returns whether the queue is empty. */
//bool myQueueEmpty(MyQueue* obj) {
//	int ret = StackEmpty(&(obj->s1));
//	if (ret)
//		return false;
//	else
//		return true;
//}
//
//void myQueueFree(MyQueue* obj) {
//	free(obj);
//	obj = NULL;
//}


//给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

int maxSubArray(int* nums, int numsSize){
	int maxAdd = nums[0];
	int sum = 0;
	int cur = 0;
	while (cur < numsSize)
	{
		sum += nums[cur];
		//连续的子串加起来是否大于最大子串
		if (sum > maxAdd)
		{
			maxAdd = sum;
		}
		//单个字符也是子串
		//判断单个字符是否大于最大子串和
		//如果大于，就从这个字符开始重新相加
		if (nums[cur] > maxAdd)
		{
			maxAdd = nums[cur];
			sum = nums[cur];
		}
		//判断单个字符是否大于连续的子串和
		//如果大于，就从这个字符开始重新相加
		if (nums[cur] > sum)
		{
			sum = nums[cur];
		}



		cur++;
	}
	return maxAdd;
}