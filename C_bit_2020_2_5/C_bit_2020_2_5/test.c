#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现strstr函数
//strstr函数是用来寻找子字符串的

#include <stdio.h>
#include <string.h>

char* my_strstr(char* arr1,char* arr2)
{
	//如果第一个字符一样但是第二个字符不同
	//目标字符串要退回第一个字符的下一个地址
	//要寻找的子字符串要退回第一个字符的地址
	//因此要设置另外的两个指针用来存储
	char* str1 = arr1;
	char* str2 = arr2;
	while (*str2 != '\0')
	{
		if (*str1 != *str2)
			str1++;
		else if (*str1==*str2)
		{
			str1++;
			str2++;
			if (*str1 != *str2&&*str2!='\0')
			{
				str2 = arr2;
			}
		}
	}
	return arr1;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcd";
	printf("%s\n", my_strstr(arr1, arr2));
	return 0;
}