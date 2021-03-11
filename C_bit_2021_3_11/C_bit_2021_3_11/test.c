#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//int cmp(const void* e1, const void* e2)
//{
//	int ret = *((char*)e1) - *((char*)e2);
//	return ret;
//}
//
//int main()
//{
//	int arr[5] = { 2, 4, 6, 3, 7 };
//	qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), cmp);
//	return 0;
//}


//整体反转

//给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。

//int reverse(int x){
//	long ret = 0;
//	while (x)
//	{
//		ret = ret * 10 + x % 10;
//		x /= 10;
//	}
//	if (ret > 2147483647 || ret < -2147483648)
//	{
//		return 0;
//	}
//	// ret = flag * ret;
//	return ret;
//}
//
//
////给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 
//
//bool isPalindrome(int x){
//	if (x < 0)
//		return false;
//	long ret = 0;
//	long newnum = x;
//	while (x)
//	{
//		ret = ret * 10 + x % 10;
//		x /= 10;
//	}
//	if (ret == newnum)
//		return true;
//
//	return false;
//}


//char* mystrncat(char* dest, const char* str, size_t count)
//{
//	assert(dest && str);
//	char* ptr = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	*dest = '\0';
//	return ptr;
//}


char* mystrncpy(char* dest, const char* src, size_t count)
{
	assert(dest && src);
	char* ptr = dest;
	while (count-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return dest;
}


int main()
{
	char str[80] = "hello world!";
	char string[] = "This is a beautiful world";
	mystrncpy(str, string, 15);
	printf("%s\n", str);
	return 0;
}


//罗马数字转换整数

//int romanToInt(char * s){
//	int x = 0;
//	char* ptr = s;
//	while (*s)
//	{
//		if (*s == 'I')
//		{
//			if (*(s + 1) == 'V' || *(s + 1) == 'X')
//				x -= 1;
//			else
//				x += 1;
//
//		}
//		if (*s == 'V')
//			x += 5;
//		if (*s == 'X')
//		{
//			if (*(s + 1) == 'L' || *(s + 1) == 'C')
//				x -= 10;
//			else
//				x += 10;
//
//		}
//		if (*s == 'L')
//			x += 50;
//		if (*s == 'C')
//		{
//			if (*(s + 1) == 'D' || *(s + 1) == 'M')
//				x -= 100;
//			else
//				x += 100;
//
//		}
//		if (*s == 'D')
//			x += 500;
//		if (*s == 'M')
//			x += 1000;
//
//		s++;
//	}
//
//	return x;
//}