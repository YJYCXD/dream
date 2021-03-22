#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
////先将N和0xaaaaaaaa与一下拿出奇数位，也就是给奇数位与1，偶数位与0
////再把N和0x55555555与一下拿出偶数位，给偶数与1，奇数与0
////但是如果只是这样的话两者按位或只能得到原来的数
////因此要交换的话，经过画图发现，要将奇数位向左移动1位，偶数位向右移动一位
////这样两者按位或才能达到交换的目的
//#define SWAP(N) (((N & (0xaaaaaaaa))>>1) | ((N &(0x55555555))<<1))
//
//int main()
//{
//	int a = 10;
//	a = SWAP(a);
//	printf("%d\n", a);
//	return 0;
//}

//利用宏实现offset命令

#include <stddef.h>
//实现offsetof命令
//由于结构体中的变量在存储的时候也是按照地址存储的，因此在实现的时候可以朝地址这方面去想
//可以把地址转换成整数，然后元素的地址和最开始存放的元素地址相减就可以得到偏移量
//但是这样比较难实现，因为传过去的是结构体的类型，并不是一个具体的变量
//因此可以用0地址来作为中介，将0地址转换为结构体类型的指针变量，然后找到其中的结构体成员，将其转换为int类型即可
//
//#define myoffsetof(SNAME, MNAME) (int)&((SNAME*)0->MNAME)
//struct S
//{
//	int a;
//	char b;
//	double d;
//};
//
//int main()
//{
//	struct S s = {1, 'a', 3.4};
//	printf("%d\n", offsetof(struct S, b));
//	return 0;
//}

//#define INT_PTR int*
//typedef int* int_ptr;	
//int main()
//{
//
//	INT_PTR a, b;
//	int_ptr c, d;
//	return 0;
//}

//给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。

//这个方法用了冒泡排序，运行时间较长

//int* sortedSquares(int* nums, int numsSize, int* returnSize){
//	int* newArr = (int*)malloc(sizeof(int) * numsSize);
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		nums[i] = nums[i] * nums[i];
//		newArr[i] = nums[i];
//	}
//
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		for (j = 0; j < numsSize - i - 1; j++)
//		{
//			if (newArr[j] > newArr[j + 1])
//			{
//				flag = 1;
//				int t = newArr[j];
//				newArr[j] = newArr[j + 1];
//				newArr[j + 1] = t;
//			}
//		}
//
//		if (0 == flag)
//			break;
//	}
//
//	*returnSize = numsSize;
//	return newArr;
//}

//双指针

int* sortedSquares(int* nums, int numsSize, int* returnSize){
	int* newArr = (int*)malloc(sizeof(int) * numsSize);
	int left = 0;
	int right = numsSize - 1;
	int pow1 = 0;
	int pow2 = 0;
	int i = numsSize - 1;
	//双指针：一个指向0，另一个指向numsSize-1
	//这两个指针一个是正数最大，一个是负数最大
	//两个进行比较，放到新数组中，这样新数组数组中就是逆序排列
	while (left <= right)
	{
		pow1 = nums[left] * nums[left];
		pow2 = nums[right] * nums[right];
		if (pow1 > pow2)
		{
			newArr[i] = pow1;
			left++;
		}
		else
		{
			newArr[i] = pow2;
			right--;
		}
		i--;
	}
	*returnSize = numsSize;
	return newArr;
}