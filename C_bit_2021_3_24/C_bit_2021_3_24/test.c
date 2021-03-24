#define _CRT_SECURE_NO_WARNINGS 1


//给你一个整型数组 nums ，在数组中找出由三个数组成的最大乘积，并输出这个乘积。

#include <stdio.h>
//int maximumProduct(int* nums, int numsSize){
//	//找到数组中的最大乘积
//	//即只要找到数组中最大的三个数或者最小的两个数和最大正数即可
//	//然后比较两者的乘积
//	int min1 = INT_MAX;//最小的数,初始值为int的最大值，如果初始化为0的话，如果数组中全是负数就会出现错误
//	int min2 = INT_MAX;//第二小的数
//	int max1 = INT_MIN;//最大的数，初始化为int的最小值，如果初始化为0，全是负数的时候这块就会始终未为0
//	int max2 = INT_MIN;//次大的数
//	int max3 = INT_MIN;//三个最大的数中最小的数
//	int i = 0;
//	int ans = 0;
//	if (numsSize == 3)
//		return nums[0] * nums[1] * nums[2];
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] <= min1)
//		{
//			min2 = min1;
//			min1 = nums[i];
//		}
//		else if (nums[i] < min2)
//		{
//			min2 = nums[i];
//		}
//		if (nums[i] >= max1)
//		{
//			max3 = max2;
//			max2 = max1;
//			max1 = nums[i];
//		}
//		else if (nums[i] > max2)
//		{
//			max3 = max2;
//			max2 = nums[i];
//		}
//		else if (nums[i] > max3)
//		{
//			max3 = nums[i];
//		}
//		printf("%d %d %d %d %d\n", min1, min2, max1, max2, max3);
//	}
//	ans = (min1*min2*max1)>(max1*max2*max3) ? (min1*min2*max1) : (max1*max2*max3);
//	return ans;
//}

//给你一个整数数组 arr，请你判断数组中是否存在连续三个元素都是奇数的情况：如果存在，请返回 true ；否则，返回 false 。

bool threeConsecutiveOdds(int* arr, int arrSize){
	if (arrSize < 3)
		return false;
	int cur = 0;
	int head = 0;
	int count = 0;
	while ((cur < arrSize) && (head < arrSize))
	{
		head = cur;
		count = 0;
		if (arr[cur] % 2 == 1)
		{
			while ((count < 3) && (cur < arrSize))
			{
				if ((arr[cur] % 2) == 0)
					break;
				++cur;
				count++;
				printf("%d\n", cur);
			}
			if (count == 3)
				return true;
		}
		cur = head + 1;
	}
	return false;
}