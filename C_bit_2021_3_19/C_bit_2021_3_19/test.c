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
//	cq->a = (int*)malloc(sizeof(int) * (k + 1));//�࿪һ������֤ÿ�ζ���һ���ո�
//	cq->head = 0;
//	cq->tail = 0;
//	cq->capacity = k + 1;
//	return cq;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if ((obj->tail + 1) % obj->capacity == obj->head)//β����1ģ�������������head������
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


//3-19��ϰ����

//Ԥ�������
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



//define��ʶ��
//define ��ʶ�����治Ҫ�ӷֺ�

//#define MAX 100
//#define PRINT printf("hehe\n")

//int main()
//{
//	//printf("%d\n", MAX);
//	PRINT;
//	return 0;
//}

//define�����

//#define ADD(X, Y) X + Y
//#define MUL(X, Y) X * Y
//#define MUL1(X, Y) (X) * (Y)
//int main()
//{
//	printf("%d\n", ADD(2, 3));
//	//�����ȷ�Ļ���������������40
//	//���Ǵ���16��������Ϊ����ֱ���滻��ȥ�ģ�û�м����ŵĻ���ı����ȼ�
//	//2+3*3+5=16
//	printf("%d\n", MUL(2 + 3, 3 + 5));
//	printf("%d\n", MUL1(2 + 3, 3 + 5));
//
//	return 0;
//}


//������������������ţ���ʱ��Ҳ�����
//�������������
//
//#define DOUBLE(X) (X) + (X)
//#define DOUBLE1(X) ((X) + (X))
//
//int main()
//{
//	//������ʽ��ȷ�Ļ���Ӧ�����40
//	//���������30��������Ϊ�������û�м�������
//	//��͵����������ʽ�ӱ仯Ϊ(2*5+5)+(2*5+5)=30
//	printf("%d\n", DOUBLE(2 * DOUBLE(5)));
//	printf("%d\n", DOUBLE1(2 * DOUBLE1(5)));
//
//	return 0;
//}


//�����Ѳ������뵽�ַ�����
//������#��##

//ֻ�е��ַ�����Ϊ�������ʱ����ܰ��ַ��������ַ�����
//#define PRINT(FORMAT, VALUE) printf("the value is "FORMAT"\n", VALUE);
//
////��#���԰�һ���������ɶ�Ӧ���ַ���
//#define PRINT1(FORMAT, VALUE) printf("the value of " #VALUE " is "FORMAT"\n", VALUE);
//
//
//int main()
//{
//	//�ַ������Լ����ӵ��ص�
//	//char* p = "hello ""bit\n";
//	//printf("hello ""bit\n");
//	//printf("%s", p);
//	int a = 0;
//	PRINT("%d", 10);
//	PRINT1("%d", a+10);
//	return 0;
//}

//����˵Ҫ��ӡ�������仰
//the value of a is 10
//the value of b is 20
//����ú����Ļ���Ҫд������ͬ�ĺ��������д�ӡ
//�����ú�Ļ����Ϳ���ֱ���滻

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

//##�������ǰ�������������һ������
#define ADD_TO_SUM(num, value) sum##num += value

int main()
{
	int sum5 = 10;
	ADD_TO_SUM(5, 10);
	printf("%d\n", sum5);
	return 0;
}