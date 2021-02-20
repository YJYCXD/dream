#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//数组形式的整数相加
//
//int* addToArrayForm1(int* A, int size, int k)
//{
//	int i = 0;
//	int* res = (int*)malloc(sizeof(int)*(size + 1));
//	int p = 0;
//	for (i = size - 1; i >= 0; i--)
//	{
//		//每一位相加
//		int sum = A[i] + k % 10;//从末位开始相加
//		k /= 10;//每次k丢掉最末位
//		if (sum >= 10)
//		{
//			k++;//遇十进位
//			sum -= 10;//sum把进位的数减掉
//		}
//		res[p] = sum;
//		p++;
//	}
//	if (k == 0)
//		res[size] = 0;
//	//上面循环执行完之后，如果最高位相加有进位，也必须存入新数组
//	for (; k > 0; k /= 10)
//	{
//		res[p] = k;
//		p++;
//	}
//
//
//	//这样操作之后，数组中存储结果的顺序是反的，需要反转
//	int start = 0;
//	int end = size;
//	while (start < end)
//	{
//		int t = res[start];
//		res[start] = res[end];
//		res[end] = t;
//		start++;
//		end--;
//	}
//	return res;
//}

int* addToArrayForm2(int* A, int size, int k)
{
	int* res = (int*)malloc(sizeof(int)*(size + 1));
	int p = 0;
	int i = 0;
	for (i = size - 1; i >= 0; i--)
	{
		k +=A[i];
		res[p++] = k % 10;
		k /= 10;
	}
	if (0 == k)
		res[size] = 0;

	for (; k > 0; k /= 10)
	{
		res[p++] = k;
	}
		
	int start = 0;
	int end = size;
	while (start < end)
	{
		int t = res[start];
		res[start] = res[end];
		res[end] = t;
		start++;
		end--;
	}
	return res;
}

int main()
{
	int arr[] = {1, 2, 2, 3 };
	int k = 432;
	int* returnArr = NULL;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* res = addToArrayForm2(arr, sz, k);
	for (int i = 0; i <= sz; i++)
		printf("%d", res[i]);
	free(res);
	returnArr = NULL;
	return 0;
}