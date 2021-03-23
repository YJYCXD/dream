#define _CRT_SECURE_NO_WARNINGS 1

//给你一个正整数数组 arr ，请你计算所有可能的奇数长度子数组的和。
//这个方法的时间复杂度是O(N^2)

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


//对于求奇数子数列的和
//对于一个元素，取其左边的数中的偶数个，取其右边的数中的偶数个，加上它自己，可以得到一个奇数子数列
//取其左边的数中的奇数个，取其右边的数中的奇数个，加上他自己，可以得到一个奇数子数列
//因此只需要举一个例子来找出取左边数的规律和右边数的规律
//每个元素在奇数子序列中出现的次数位元素值乘以(左边取得数乘左边取得数+右边取得数乘右边取得数)
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