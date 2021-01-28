#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("&i = %p\n", &i);
//	for (i = 0; i <= 12; i++)
//	{
//		
//		printf("&arr[%d] = %p\n",i,&arr[i]);
//	}
//	return 0;
//}

//#include <assert.h>
//int my_strlen(const char* str)//用const修饰传过来的字符串是为了避免在函数中将字符串修改
//{
//	assert(str != NULL);//使用断言可以检测自己不想产生的结果
//	int count = 0;
//	while (*str++)//*str不等于'\0'时，表达式均为真；*str等于'\0'时，表达式为假，因为'\0'的ASCII值为0
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[10] = "cxdyjy";
//	int count = my_strlen(str);
//	printf("%d\n", count);
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* str1, const char* str2)//根据strcpy的定义，在源字符串上添加const字符，防止被改变
//                                             //const放在*的左边，表示指针指向的内容不能被改变
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);//assert里面也可以写成assert(str1)，因为只要表达式为真，就不会报错
//	                     //如果是NULL，NULL定义为常数0，也就意味着表达式为假，就会报错
//	char* p = str1;
//	while (*str1++ = *str2++)//在判断条件的地方进行内容的复制，就可以省去最后给str1再赋值'\0'的步骤，可以简化代码
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char str1[] = "cxdyjy";
//	char str2[] = "bit";
//	char* p = my_strcpy(str1, str2);
//	printf("%s\n", p);
//	return 0;
//}

//
//void Turn_arr(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	int* p = arr;
//	for (i = 0; i < sz - 1; i++)
//	{
//		p = arr;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (*p %2 == 0)
//			{
//				int t = *p;
//				*p = *(p + 1);
//				*(p + 1) = t;
//			}
//			p++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 14, 22, 36, 26, 1, 5, 79, 60 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Turn_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}