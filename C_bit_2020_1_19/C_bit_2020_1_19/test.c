#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void sort_num(int arr[3],int sz)
//{
//	int t = 0;
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			t = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = t;
//		}
//	}
//}
//int  main()
//{
//	int arr[3] = { 2, 1, 3 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort_num(arr,sz);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int n = 100;
//	for (i = 1; i <= n; i++)
//	{
//		if (0 == i % 3)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int find_gcd(int a, int b)
//{
//	int t = 0;
//	while (a%b!=0)
//	{
//		t = a%b;
//		a = b;
//		b = t;
//	}
//	return b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数:>");
//	scanf("%d %d", &a, &b);
//	int ret=find_gcd(a, b);
//	printf("最大公约数：%d\n", ret);
//	return 0;
//}

//void print_leap_year(int start, int end)
//{
//	int i = 0;
//	for (i = start; i <= end; i++)
//	{
//		if (0 == i % 4 && 0 != i % 100)
//			printf("%5d ", i);
//		else if (0 == i % 400)
//			printf("%5d ", i);
//		
//	}
//}
//int main()
//{
//	int start = 1000;
//	int end = 2000;
//	print_leap_year(start, end);
//	return 0;
//}

//#include <math.h>
//void print_prime(int start, int end)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = start; i <= end; i++)
//	{
//		int ret = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (0 == i%j)
//			{
//				ret = 1;
//				break;
//			}
//		}
//		if (0 == ret)
//			printf("%d ", i);
//	}
//}
//int main()
//{
//	int start = 100;
//	int end = 200;
//	print_prime(start, end);
//	return 0;
//}

//int find_nine(int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (9 == i / 10)
//			sum++;
//		if (9 == i % 10)
//			sum++;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 100;
//	int ret=find_nine(n);
//	printf("%d\n", ret);
//	return 0;
//}

//double cacu_fraction(int n)
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= n; i++)
//	{
//		if (0 == i % 2)
//			sum += (-1) * (1.0 / i);
//		else
//			sum += (1.0 / i);
//	}
//
//	return sum;
//}
//int main()
//{
//	int n = 100;
//	double ret = cacu_fraction(n);
//	printf("ret=%f", ret);
//	return 0;
//}
//
//int find_max(int arr[], int sz)
//{
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			max = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = max;
//		}
//		else
//			max = arr[i + 1];
//	}
//
//	return max;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 16, 7, 8, 29, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = find_max(arr, sz);
//	printf("max=%d\n", max);
//	return 0;
//}

//void print_mult_table()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	print_mult_table();
//	return 0;
//}


void binary_search(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid+1;//中间的数小于k，不以mid作为左下标，而是以mid的下一个数

		}
		else if (arr[mid] > k)
		{
			right = mid-1;//中间的数大于k，不以mid作为左下标，而是以mid的上一个数
		}
		else
		{
			printf("找到了,下标是:%d\n",mid);
			break;
		}
	}
	if (left > right)
		printf("没找到\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入想要查找的数字：>");
	scanf("%d", &k);
	binary_search(arr, k,sz);
	return 0;
}