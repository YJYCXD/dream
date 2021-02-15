#define _CRT_SECURE_NO_WARNINGS 1

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转金字塔图案。


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
//			for (j = 1; j <= i - 1; j++)
//				printf(" ");
//			for (j = i; j <= n; j++)
//				printf("* ");
//
//			printf("\n");
//
//		}
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的菱形图案。


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		//打印上半部分
//		for (i = 1; i <= (n + 1); i++)
//		{
//			int j = 0;
//			for (j = i; j <= n; j++)
//				printf(" ");
//			for (j = 1; j <= i; j++)
//				printf("* ");
//
//			printf("\n");
//		}
//
//		//打印下半部分
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf(" ");
//
//			for (j = i; j <= n; j++)
//				printf("* ");
//
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的K形图案。


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		//上半部分
//		for (i = 1; i <= (n + 1); i++)
//		{
//			int j = 0;
//			for (j = i; j <= (n + 1); j++)
//				printf("* ");
//
//
//			for (j = 1; j <= i; j++)//在图案的后面补空格
//				printf(" ");
//
//			printf("\n");
//		}
//
//		//下半部分
//		for (i = 2; i <= (n + 1); i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf("* ");
//
//			for (j = i; j <= (n + 1); j++)//补空格
//				printf(" ");
//
//
//
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案。


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		//上半部分
//		for (i = 1; i <= (n + 1); i++)
//		{
//			int j = 0;
//			for (j = i; j <= n; j++)
//				printf("  ");
//
//			for (j = 1; j <= i; j++)
//				printf("*");
//			printf("\n");
//		}
//
//		//下半部分
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf("  ");
//			for (j = i; j <= n; j++)
//				printf("*");
//
//			printf("\n");
//		}
//	}
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的反斜线形图案。
//
//#include <stdio.h>
//int main()
//{
	//int n = 0;
	//int i = 0;
	//while (~scanf("%d", &n))
	//{
	//	for (i = 1; i <= n; i++)
	//	{
	//		int j = 0;
	//		for (j = 1; j<i; j++)
	//			printf(" ");
	//		printf("*");

	//		for (j = i; j <= n; j++)
	//			printf(" ");

	//		printf("\n");
//
//		}
//	}
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正斜线形图案。

//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i; j<n; j++)
//				printf(" ");
//			printf("*");
//			for (j = 1; j <= i; j++)
//				printf(" ");
//
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。

#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	while (~scanf("%d", &n))
	{
		for (i = 1; i <= n; i++)
		{
			//i=j时打印*，j=n-i-1时打印*
			int j = 0;
			for (j = 1; j <= n; j++)
			{

				if (j == i || j == n - i + 1)
					printf("*");
				else
					printf(" ");

			}

			printf("\n");
		}
	}
	return 0;
}