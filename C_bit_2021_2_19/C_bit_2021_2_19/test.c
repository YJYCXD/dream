#define _CRT_SECURE_NO_WARNINGS 1

//今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。
//包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int t = i;
//		while (t>0)
//		{
//			if (9 == t % 10)
//			{
//				sum++;
//				break;
//			}
//
//			t /= 10;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	float score = 0.0;
//	float max = 0.0;
//	float min = 100.0;
//	float aver = 0.0;
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%f", &score);
//		if (score <= min)
//			min = score;
//		if (score >= max)
//			max = score;
//		aver += score;
//	}
//	printf("%.2f %.2f %.2f\n", max, min, aver / 5.0);
//	return 0;
//}

//用户登录网站，通常需要注册，一般需要输入两遍密码。请编程判断输入的两次密码是否一致，
//一致输出“same”，不一致输出“different”

//#include <stdio.h>
//int main()
//{
//	char pass1[50] = { 0 };
//	char pass2[50] = { 0 };
//	scanf("%s %s", pass1, pass2);
//	if (0 == strcmp(pass1, pass2))
//		printf("same\n");
//	else
//		printf("different\n");
//	return 0;
//}

//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。

//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int m = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d%d", &m, &n);
//	for (int i = 0; i<m; i++)
//	{
//		for (int j = 0; j<n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j]>0)
//				sum += arr[i][j];
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//输入10科成绩，换行显示输入的10科成绩。

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//printf("\n");
//	for (i = 0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//int removeElement(int* nums, int numsSize, int val)
//{
//	int i = 0;
//	int count = numsSize;
//	while (numsSize>0)
//	{
//		numsSize--;
//		if (nums[i] == val)
//		{
//			int j = 0;
//			for (j = i; j <= count - i; j++)
//			{
//				nums[j] = nums[j + 1];
//			}
//
//			count--;
//			continue;
//		}
//		i++;
//	}
//	return count;
//
//}

//移除指定的元素
//int removeElement(int* nums, int numsSize, int val)
//{
//	int count = numsSize;
//	int p1 = 0;
//	int p2 = 0;
//	while (p1<numsSize)
//	{
//		if (nums[p1] == val)
//		{
//			p1++;
//			count--;
//		}
//		else
//		{
//			nums[p2] = nums[p1];
//			p1++;
//			p2++;
//		}
//	}
//	return count;
//
//}
//
//int main()
//{
//	int arr[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
//	int size = removeElement(arr, 8, 2);
//	for (int i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//删除排序数组中的重复项
//int removeDuplicates(int* nums, int numsSize){
//	int p1 = 1;
//	int p2 = 1;
//	int count = numsSize;
//	while (p1<numsSize)
//	{
//		if (nums[p1] == nums[p1 - 1])
//		{
//			p1++;
//			count--;
//		}
//		else
//		{
//			nums[p2] = nums[p1];
//			p1++;
//			p2++;
//		}
//	}
//	return count;
//}

//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。你可以假设 nums1 的空间大小等于 m + n，这样它就有足够的空间保存来自 nums2 的元素。

#include <stdio.h>
#include <stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int p1 = 0;
	int p2 = 0;
	int* arr = (int*)calloc(nums1Size, sizeof(int));
	while (p1<m || p2<n)
	{
		if (nums1[p1]<nums2[p2])
		{
			*arr = nums1[p1];
			p1++;
			arr++;
		}
		else
		{
			*arr = nums2[p2];
			p2++;
			arr++;
		}

	}
	if (p1 == m)
	{
		while (p2<n)
		{
			*arr = nums2[p2];
			p2++;
			arr++;
		}

	}
	if (p2 == n)
	{
		while (p1<m)
		{
			*arr = nums1[p1];
			p1++;
			arr++;
		}

	}
	for (int i = 0; i<nums1Size; i++)
	{
		nums1[i] = arr[i];
	}
	free(arr);
	arr = NULL;
}

int main()
{
	int arr1[6] = { 1, 2, 3 };
	int arr2[] = { 2, 5, 6 };
	merge(arr1, 6, 3, arr2, 3, 0);
	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	return 0;
}

