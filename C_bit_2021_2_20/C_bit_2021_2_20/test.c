#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//������ʽ���������
//
//int* addToArrayForm1(int* A, int size, int k)
//{
//	int i = 0;
//	int* res = (int*)malloc(sizeof(int)*(size + 1));
//	int p = 0;
//	for (i = size - 1; i >= 0; i--)
//	{
//		//ÿһλ���
//		int sum = A[i] + k % 10;//��ĩλ��ʼ���
//		k /= 10;//ÿ��k������ĩλ
//		if (sum >= 10)
//		{
//			k++;//��ʮ��λ
//			sum -= 10;//sum�ѽ�λ��������
//		}
//		res[p] = sum;
//		p++;
//	}
//	if (k == 0)
//		res[size] = 0;
//	//����ѭ��ִ����֮��������λ����н�λ��Ҳ�������������
//	for (; k > 0; k /= 10)
//	{
//		res[p] = k;
//		p++;
//	}
//
//
//	//��������֮�������д洢�����˳���Ƿ��ģ���Ҫ��ת
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