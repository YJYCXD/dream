#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 10
#include <stdio.h>
////�������ð������
//
//void bubble_sort(int arr[SIZE], int sz)
//{
//	int i = 0;
//	int j = 0;
//	//������������еĻ���ѭ��9�˻ή��Ч��
//	for (i = 0; i < sz - 1; i++)//��һ��ѭ������ִ�бȽϵ�������10��Ԫ��Ҫִ��9��
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)//�ڶ���ѭ��ִ�бȽϵĴ�������һ�αȽ�9�Σ��ڶ��αȽ�8��
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


////������ĳ�ʼ������ӡ����������������
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
//	reverse(arr,sz);//����Ҳ���ǵ�һ�������һ���������ڶ����͵����ڶ����������Դ�����
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
//	printf("ԭarr1:");
//	print(arr1);
//	printf("ԭarr2:");
//	print(arr2);
//	Swap(arr1, arr2);
//	printf("��arr1:");
//	print(arr1);
//	printf("��arr2:");
//	print(arr2);
//	return 0;
//}

int count = 0;//ȫ�ֱ���
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