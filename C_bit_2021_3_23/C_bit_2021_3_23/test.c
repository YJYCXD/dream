#define _CRT_SECURE_NO_WARNINGS 1

//����һ������������ arr ������������п��ܵ���������������ĺ͡�
//���������ʱ�临�Ӷ���O(N^2)

int sumOddLengthSubarrays(int* arr, int arrSize){
	int i = 0;
	int j = 0;
	int sum = 0;
	int ans = 0;
	for (i = 0; i < arrSize; i++)
	{
		//ans += arr[i];
		sum = 0;
		for (j = i; j < arrSize; j++)
		{
			sum += arr[j];
			if (((&arr[j] - &arr[i]) + 1) % 2 == 1)
				ans += sum;
		}
	}
	return ans;
}


//���������������еĺ�
//����һ��Ԫ�أ�ȡ����ߵ����е�ż������ȡ���ұߵ����е�ż�������������Լ������Եõ�һ������������
//ȡ����ߵ����е���������ȡ���ұߵ����е����������������Լ������Եõ�һ������������
//���ֻ��Ҫ��һ���������ҳ�ȡ������Ĺ��ɺ��ұ����Ĺ���
//ÿ��Ԫ���������������г��ֵĴ���λԪ��ֵ����(���ȡ���������ȡ����+�ұ�ȡ�������ұ�ȡ����)
//
//int sumOddLengthSubarrays(int* arr, int arrSize){
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < arrSize; i++)
//	{
//		int left = i;
//		int right = arrSize - i - 1;
//		int left_odd = left / 2 + 1;
//		int left_even = (left + 1) / 2;
//		int right_odd = right / 2 + 1;
//		int right_even = (right + 1) / 2;
//		sum += (arr[i] * (left_even * right_even + left_odd * right_odd));
//	}
//	return sum;
//}


#include <stdio.h>

int main()
{
	printf("%d\n", atoi("123asd"));
	return 0;
}