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
//int my_strlen(const char* str)//��const���δ��������ַ�����Ϊ�˱����ں����н��ַ����޸�
//{
//	assert(str != NULL);//ʹ�ö��Կ��Լ���Լ���������Ľ��
//	int count = 0;
//	while (*str++)//*str������'\0'ʱ�����ʽ��Ϊ�棻*str����'\0'ʱ�����ʽΪ�٣���Ϊ'\0'��ASCIIֵΪ0
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
//char* my_strcpy(char* str1, const char* str2)//����strcpy�Ķ��壬��Դ�ַ��������const�ַ�����ֹ���ı�
//                                             //const����*����ߣ���ʾָ��ָ������ݲ��ܱ��ı�
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);//assert����Ҳ����д��assert(str1)����ΪֻҪ���ʽΪ�棬�Ͳ��ᱨ��
//	                     //�����NULL��NULL����Ϊ����0��Ҳ����ζ�ű��ʽΪ�٣��ͻᱨ��
//	char* p = str1;
//	while (*str1++ = *str2++)//���ж������ĵط��������ݵĸ��ƣ��Ϳ���ʡȥ����str1�ٸ�ֵ'\0'�Ĳ��裬���Լ򻯴���
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