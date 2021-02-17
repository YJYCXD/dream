#define _CRT_SECURE_NO_WARNINGS 1
#define F(X,Y) ((X)+(Y))

//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，
//该任务是打印用“*”组成的“空心”正方形图案。

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			if (1 == i || i == n)
//			{
//				for (j = 1; j <= n; j++)
//					printf("* ");
//
//				printf("\n");
//			}
//			else
//			{
//				for (j = 1; j <= n; j++)
//				{
//					if (1 == j || j == n)
//						printf("* ");
//					else
//						printf("  ");
//				}
//				printf("\n");
//			}
//		}
//	}
//
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，
//该任务是打印用“*”组成的“空心”三角形图案。


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= n; j++)
//			{
//				if (i == j || j == 1 || i == n)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//从键盘输入5个人的身高（米），求他们的平均身高（米）。


//#include <stdio.h>
//int main()
//{
//	int count = 5;
//	float height = 0.0;
//	float sum = 0.0;
//	while ((~scanf("%f", &height)) && count)
//	{
//		sum += height;
//		count--;
//	}
//	printf("%.2f", sum / 5.0);
//	return 0;
//}


//KiKi想知道这学期他的学习情况，BoBo老师告诉他这学期挂的科目累计的学分，
//根据所挂学分，判断KiKi学习情况，10分以上：很危险(Danger++)，4~9分：危险(Danger)，0~3:Good。

//
//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score <= 3)
//		printf("Good\n");
//	else if (score <= 9)
//		printf("Danger\n");
//	else
//		printf("Danger++\n");
//	return 0;
//}


//针对每组输入的HTTP状态，输出该状态码对应的含义

//#include <stdio.h>
//int main()
//{
//	int HTTP = 0;
//	while (~scanf("%d", &HTTP))
//	{
//		if (200 == HTTP)
//			printf("OK\n");
//		if (202 == HTTP)
//			printf("Accepted\n");
//		if (400 == HTTP)
//			printf("Bad Request\n");
//		if (403 == HTTP)
//			printf("Forbidden\n");
//		if (404 == HTTP)
//			printf("Not Found\n");
//		if (500 == HTTP)
//			printf("Internal Server Error\n");
//		if (502 == HTTP)
//			printf("Bad Gateway\n");
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用数字组成的数字三角形图案。

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf("%d ", j);
//
//			printf("\n");
//		}
//	}
//
//	return 0;
//}



//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），
//去掉一个最高分和一个最低分，输出每组的平均成绩。


//#include <stdio.h>
//int main()
//{
//	int min = 100;
//	int max = 0;
//	int score = 0;
//	int sum = 0;
//	int count = 7;
//	while ((~scanf("%d", &score)) && count)
//	{
//		if (score<min)
//			min = score;
//		if (score>max)
//			max = score;
//		sum += score;
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//	return 0;
//}


//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。

#include <stdio.h>
int main()
{
	int arr[51] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int num = 0;
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int i = 0;
	scanf("%d", &num);
	for (i = 0; i<n; i++)
	{
		if (num <= arr[i])
		{
			for (int j = n; j>i; j--)
			{
				arr[j] = arr[j - 1];
				if (j == i + 1)
					arr[j - 1] = num;


			}
			break;
		}
	}
	if (i == n)
		arr[i] = num;
	for (i = 0; i <= n; i++)
		printf("%d ", arr[i]);
	return 0;
}