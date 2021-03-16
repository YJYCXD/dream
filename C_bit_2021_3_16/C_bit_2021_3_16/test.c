#define _CRT_SECURE_NO_WARNINGS 1

//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* _a;
//	int _top;
//	int _capacity;
//}Stack;
//
////ջ�ĳ�ʼ��
//void StackInit(Stack* ps);
//
////��ջ
//void StackPush(Stack* ps, STDataType data);
//
////��ջ
//void StackPop(Stack* ps);
//
////��ȡջ��Ԫ��
//STDataType StackTop(Stack* ps);
//
////��ȡջ����ЧԪ�ظ���
//int StackSize(Stack* ps);
//
/////���ջ�Ƿ�Ϊ�գ��շ��ط�0���ǿշ���0
//int StackEmpty(Stack* ps);
//
////����ջ
//void StackDestory(Stack* ps);
//
////ջ�ĳ�ʼ��
//void StackInit(Stack* ps)
//{
//	assert(ps);
//	ps->_a = (STDataType*)malloc(sizeof(STDataType) * 4);
//	ps->_top = 0;
//	ps->_capacity = 4;
//}
//
////��ջ
//void StackPush(Stack* ps, STDataType data)
//{
//	assert(ps);
//	if (ps->_top == ps->_capacity)
//	{
//		ps->_capacity *= 2;
//		STDataType* ptr = (STDataType*)realloc(ps, sizeof(STDataType) * ps->_capacity);
//		if (ptr == NULL)
//		{
//			printf("�ڴ治��\n");
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
////��ջ
//void StackPop(Stack* ps)
//{
//	assert(ps);
//	assert(ps->_top >= 0);
//	ps->_top--;
//}
//
////��ȡջ��Ԫ��
//STDataType StackTop(Stack* ps)
//{
//	assert(ps);
//	return ps->_a[ps->_top - 1];
//}
//
////��ȡջ����ЧԪ�ظ���
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->_top;
//}
//
/////���ջ�Ƿ�Ϊ�գ��շ��ط�0���ǿշ���0
//int StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->_top;
//}
//
////����ջ
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


//����һ���������� nums ���ҵ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�

int maxSubArray(int* nums, int numsSize){
	int maxAdd = nums[0];
	int sum = 0;
	int cur = 0;
	while (cur < numsSize)
	{
		sum += nums[cur];
		//�������Ӵ��������Ƿ��������Ӵ�
		if (sum > maxAdd)
		{
			maxAdd = sum;
		}
		//�����ַ�Ҳ���Ӵ�
		//�жϵ����ַ��Ƿ��������Ӵ���
		//������ڣ��ʹ�����ַ���ʼ�������
		if (nums[cur] > maxAdd)
		{
			maxAdd = nums[cur];
			sum = nums[cur];
		}
		//�жϵ����ַ��Ƿ�����������Ӵ���
		//������ڣ��ʹ�����ַ���ʼ�������
		if (nums[cur] > sum)
		{
			sum = nums[cur];
		}



		cur++;
	}
	return maxAdd;
}