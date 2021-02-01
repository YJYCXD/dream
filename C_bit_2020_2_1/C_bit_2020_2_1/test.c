#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}
//

//long long fac(int n)
//{
//	int i = 0;
//	long long ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("打印几行杨辉三角:>\n");
//	scanf("%d", &n);
//	printf("第%d行杨辉三角：\n",n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		long long n1=fac(i - 1);
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			long long m1 = fac(j - 1);
//			long long q = fac(i - j);
//			printf("%2lld ", n1 / (m1*q));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#include <stdio.h>

//int main()
//{
//	int n = 1;
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	printf("1\n");//第一行比较特殊，额外打印出来
//	for (i = 2; i <= a; i++)
//	{
//		n = 1;
//		printf("1 ");//每一行的两边都是1
//		for (j = 1; j <= i - 2; j++)
//		{
//			n = (i - j)*n / j;
//			printf("%d ", n);
//		}
//		printf("1\n");
//	}
//	return 0;
//}


//int main()
//{
//	int killer[4] = { 0 };//默认四个人都不是凶手
//	//对每一种情况进行遍历
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		//假设一个人说的是假话
//		killer[i] = 1;
//		if ((killer[0] != 1) + (killer[2] == 1) + (killer[3] == 1) + (killer[3] != 1) == 3)
//		{
//			break;
//		}
//		killer[i] = 0;//如果没有跳出循环，说明说的是真话
//	}
//	printf("%d\n", i+1);//A是第一个人，D是第四个人
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//用5个循环将所有可能进行遍历
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (a*b*c*d*e == 120)//要满足每个人名次不重复
//						{
//							if (((a == 3) + (b == 2) == 1) &&
//								((b == 2) + (e == 4) == 1) &&
//								((c == 1) + (d == 2) == 1) &&
//								((d == 3) + (c == 5) == 1) &&
//								((e == 4) + (a == 1) == 1))//有一半满足，因此逻辑相加的结果为1
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//
//	int a = 20;
//	int b = -10;
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

//输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;//第一个数是正
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

int main()
{
	int i = 0;
	int score[3] = { 0 };
	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
	{
		int max = 0;//每次输入，将max重置
		for (i = 0; i < 3; i++)
		{
			if (score[i] > 0)
				max = score[i];
		}
		printf("%d\n", max);
	}
	return 0;
}