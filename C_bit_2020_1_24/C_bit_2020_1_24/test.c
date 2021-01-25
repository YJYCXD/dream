#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 10
#include <stdio.h>
////对数组的冒泡排序
//
//void bubble_sort(int arr[SIZE], int sz)
//{
//	int i = 0;
//	int j = 0;
//	//如果是有序序列的话，循环9趟会降低效率
//	for (i = 0; i < sz - 1; i++)//第一层循环用来执行比较的趟数，10个元素要执行9趟
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)//第二层循环执行比较的次数，第一次比较9次，第二次比较8次
//		{
//			
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//			break;
//	}
//}
//
//void print(int arr[SIZE])
//{
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	int arr[SIZE] = {1, 2, 3, 4, 6, 9, 17, 8, 19, 100};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr);
//	return 0;
//}


////对数组的初始化、打印、和逆置三个操作
//
//void Init(int arr[SIZE])
//{
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[SIZE])
//{
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[SIZE],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//
//}
//int main()
//
//{
//	int arr[SIZE];
//	int i = 0;
//	Init(arr);
//	print(arr);
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);//逆置也就是第一个和最后一个交换，第二个和倒数第二个交换，以此类推
//	print(arr);
//	return 0;
//}

//void print(int arr[SIZE])
//{
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Swap(int arr1[SIZE], int arr2[SIZE])
//{
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		int t = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = t;
//	}
//}
//int main()
//{
//	int arr1[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[SIZE] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	printf("原arr1:");
//	print(arr1);
//	printf("原arr2:");
//	print(arr2);
//	Swap(arr1, arr2);
//	printf("新arr1:");
//	print(arr1);
//	printf("新arr2:");
//	print(arr2);
//	return 0;
//}

int count = 0;//全局变量
int fib(int n)
{
	if (n == 3)
		count++;
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 30;
	fib(n);
	printf("%d\n", count);
	return 0;
}