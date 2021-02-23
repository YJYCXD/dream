#define _CRT_SECURE_NO_WARNINGS 1

//求内存中二进制1的个数
//
//#include <stdio.h>
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1)== 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}



//输入10个整数，分别统计输出正数、负数的个数。

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int positive = 0;
//	int negative = 0;
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i]>0)
//			positive++;
//		else if (arr[i]<0)
//			negative++;
//	}
//	printf("positive:%d\nnegative:%d\n", positive, negative);
//	return 0;
//}



//输入数字N，然后输入N个数，计算这N个数的和。


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int num = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int score = 0;
//	int max = 0;
//	int min = 100;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%d\n", max - min);
//	return 0;
//}

//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序。


//#include <stdio.h>
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//			flag1 = 1;
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] < arr[i + 1])
//			flag2 = 1;
//	}
//	if (0 == flag1 || 0 == flag2)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}


//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//用malloc开辟空间

#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int* arr = (int*)malloc(sizeof(int) * (n + 1));
//	int num = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	scanf("%d", &num);
//	for (i = n - 1; arr[i] > num; i--)
//		arr[i + 1] = arr[i];
//
//	arr[i + 1] = num;
//
//	for (i = 0; i < n + 1; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，
//输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int* arr = (int*)malloc(sizeof(int) * n);
//	int num = 0;
//	int i = 0;
//	int ptr1 = 0;
//	int ptr2 = 0;
//	int n1 = 0;
//	scanf("%d", &n);
//	n1 = n;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	scanf("%d", &num);
//	while (ptr1 < n)
//	{
//		if (num != arr[ptr1])
//		{
//			arr[ptr2] = arr[ptr1];
//			ptr1++;
//			ptr2++;
//		}
//		else
//		{
//			++ptr1;
//			arr[ptr2] = arr[ptr1];
//			--n1;
//		}
//	}
//	n = n1;
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//#include <stdio.h>
//
//int Change(int* px)
//{
//	int y = 8;
//	y = y - *px;
//	px = &y;
//	return 0;
//}
//int main()
//{
//	int xx = 3;
//	int* py = &xx;
//	Change(py);
//	printf("%d\n", *py);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}


#include <stdio.h>

//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);
//	}
//	return count;
//}
//
//int main()
//{
//
//	printf("fun(2019) = %d\n", fun(2019));
//	return 0;
//}


//求内存中二进制1的个数

//#include <stdio.h>
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#define CIR(r) (r)*(r)
//
//void main()
//{
//	int a = 1;
//	int b = 2;
//	int t;
//	t = CIR(a + b);
//	printf("%d\n", t);
//	return;
//}


unsigned long g = 0;

void Global(unsigned long u)
{
	u = 0x01;
	return;
}

void test()
{
	Global(g);
	printf("%lu\n", g);
}

int main()
{
	test();
	return 0;
}