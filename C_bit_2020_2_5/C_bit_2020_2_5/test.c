#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ��strstr����
//strstr����������Ѱ�����ַ�����

#include <stdio.h>
#include <string.h>

char* my_strstr(char* arr1,char* arr2)
{
	//�����һ���ַ�һ�����ǵڶ����ַ���ͬ
	//Ŀ���ַ���Ҫ�˻ص�һ���ַ�����һ����ַ
	//ҪѰ�ҵ����ַ���Ҫ�˻ص�һ���ַ��ĵ�ַ
	//���Ҫ�������������ָ�������洢
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