#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//判断素数
//1.试除法
//境界1
//int main()
//{
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (0 == i%j)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//境界2
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= (i / 2); j++)
//		{
//			if (0 == i%j)
//				break;
//		}
//		if (j > (i / 2))
//			printf("%d ", i);
//		
//		
//	}
//	return 0;
//}
//
//
//境界3
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= (i / 2); j++)
//		{
//			if (0 == i%j)
//				break;
//		}
//		if (j > (i / 2) )
//			printf("%d ", i);
//
//
//	}
//	return 0;
//}


//境界4
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (0 == i%j)
//				break;
//		}
//		if (j > sqrt(i) )
//			printf("%d ", i);
//
//
//	}
//	return 0;
//}



//筛选法
//int main()
//{
//	//假设求100-200之间的素数
//	int arr[101] = { 0 };
//	int i = 0;
//	int j = 0;
//	arr[0] = 1;
//	arr[1] = 1;
//	for (i = 2; i <= 100; i++)
//	{
//		if (arr[i] == 1)
//			continue;
//		//因为2是公认最小的质数，因此跳过2，从3开始
//		for (int j = i * 2; j <= 100; j+=i)
//		{
//			if (arr[j] == 1)
//				continue;
//			arr[j] = 1;
//
//		}
//		
//	}
//	for (j = 1; j <= 100; j++)
//	{
//		if (arr[j] == 0)
//			printf("%d ", j);
//	}
//	return 0;
//}


