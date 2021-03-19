#define _CRT_SECURE_NO_WARNINGS 1

//typedef struct {
//	int* a;
//	int head;
//	int tail;
//	int capacity;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* cq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	cq->a = (int*)malloc(sizeof(int) * (k + 1));//多开一个，保证每次都有一个空格
//	cq->head = 0;
//	cq->tail = 0;
//	cq->capacity = k + 1;
//	return cq;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if ((obj->tail + 1) % obj->capacity == obj->head)//尾部加1模上容量如果等于head就满了
//	{
//		return false;
//	}
//	else
//	{
//		if ((obj->tail + 1) > obj->capacity)
//			obj->tail = 0;
//		obj->a[obj->tail] = value;
//		obj->tail++;
//		return true;
//	}
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (obj->head == obj->tail)
//		return false;
//	else
//	{
//		if ((obj->head + 1) % obj->capacity == 0)
//			obj->head = 0;
//		else
//		{
//			obj->head++;
//		}
//
//		return true;
//	}
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//	if (obj->head == obj->tail)
//		return -1;
//	else
//		return obj->a[obj->head];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//	if (obj->head == obj->tail)
//	{
//		return -1;
//	}
//	else
//	{
//		if (obj->tail == 0)
//			obj->tail = obj->capacity - 1;
//		return obj->a[obj->tail - 1];
//
//	}
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	if (obj->head == obj->tail)
//		return true;
//	else
//		return false;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//	if ((obj->tail + 1) % obj->capacity == obj->head)
//		return true;
//	else
//		return false;
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	free(obj->a);
//	free(obj);
//}

/**
* Your MyCircularQueue struct will be instantiated and called as such:
* MyCircularQueue* obj = myCircularQueueCreate(k);
* bool param_1 = myCircularQueueEnQueue(obj, value);

* bool param_2 = myCircularQueueDeQueue(obj);

* int param_3 = myCircularQueueFront(obj);

* int param_4 = myCircularQueueRear(obj);

* bool param_5 = myCircularQueueIsEmpty(obj);

* bool param_6 = myCircularQueueIsFull(obj);

* myCircularQueueFree(obj);
*/


//3-19练习代码

//预处理符号
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%s: %s: %d\n", __FILE__, __DATE__, i);
//	}
//	return 0;
//}



//define标识符
//define 标识符后面不要加分号

//#define MAX 100
//#define PRINT printf("hehe\n")

//int main()
//{
//	//printf("%d\n", MAX);
//	PRINT;
//	return 0;
//}

//define定义宏

//#define ADD(X, Y) X + Y
//#define MUL(X, Y) X * Y
//#define MUL1(X, Y) (X) * (Y)
//int main()
//{
//	printf("%d\n", ADD(2, 3));
//	//如果正确的话，下面的语句会输出40
//	//但是答案是16，这是因为宏是直接替换过去的，没有加括号的话会改变优先级
//	//2+3*3+5=16
//	printf("%d\n", MUL(2 + 3, 3 + 5));
//	printf("%d\n", MUL1(2 + 3, 3 + 5));
//
//	return 0;
//}


//就算给变量加上了括号，有时候也会出错
//比如下面的例子
//
//#define DOUBLE(X) (X) + (X)
//#define DOUBLE1(X) ((X) + (X))
//
//int main()
//{
//	//如果表达式正确的话，应该输出40
//	//但是输出了30，这是因为宏的整体没有加上括号
//	//这就导致了上面的式子变化为(2*5+5)+(2*5+5)=30
//	printf("%d\n", DOUBLE(2 * DOUBLE(5)));
//	printf("%d\n", DOUBLE1(2 * DOUBLE1(5)));
//
//	return 0;
//}


//怎样把参数插入到字符串中
//可以用#和##

//只有当字符串作为宏参数的时候才能把字符串放在字符串中
//#define PRINT(FORMAT, VALUE) printf("the value is "FORMAT"\n", VALUE);
//
////用#可以把一个宏参数变成对应的字符串
//#define PRINT1(FORMAT, VALUE) printf("the value of " #VALUE " is "FORMAT"\n", VALUE);
//
//
//int main()
//{
//	//字符串有自己连接的特点
//	//char* p = "hello ""bit\n";
//	//printf("hello ""bit\n");
//	//printf("%s", p);
//	int a = 0;
//	PRINT("%d", 10);
//	PRINT1("%d", a+10);
//	return 0;
//}

//比如说要打印下面两句话
//the value of a is 10
//the value of b is 20
//如果用函数的话就要写两个不同的函数来进行打印
//但是用宏的话，就可以直接替换

//#define PRINT(FORMAT, VALUE) printf("the value of " #VALUE " is "FORMAT"\n", VALUE);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT("%d", a);
//	PRINT("%d", b);
//
//	return 0;
//}

//##的作用是把两个符号连成一个整体
#define ADD_TO_SUM(num, value) sum##num += value

int main()
{
	int sum5 = 10;
	ADD_TO_SUM(5, 10);
	printf("%d\n", sum5);
	return 0;
}