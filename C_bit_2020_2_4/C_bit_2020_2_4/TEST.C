#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>
//void Turn_string(char* str)
//{
//	//if (strlen(str)>=2)
//	//{
//	//	char tmp = *str;
//	//	*str = *(str + strlen(str) - 1);
//	//	*(str + strlen(str) - 1) = '\0';
//	//	Turn_string(str + 1);
//	//	*(str + strlen(str)) = tmp;
//	//}
//
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str+1)>=2)
//		Turn_string(str + 1);
//	*(str + len-1) = tmp;
//	
//}
//int main()
//{
//	char arr[] = "yjycxd";
//	Turn_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//double my_pow(int n, int k)
//{
//	if (0 == k)
//		return 1;
//	else if (k < 0)
//		return (1.0/n)*my_pow(n, k + 1);
//	else
//		return n*my_pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = my_pow(n, k);
//	printf("%d的%d次方是%f", n, k, ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	int i = 0;
//	while (~(ch = getchar()))
//	{
//		for (i = 1; i <= 5; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= 5 - i; j++)
//			{
//				printf(" ");
//			}
//
//			for (j = 1; j <= i; j++)
//			{
//				if (i<5)
//					printf("%c ", ch);
//				else
//				{
//					if (j == i)
//						printf("%c", ch);
//					else
//						printf("%c ", ch);
//				}
//			}
//			if (i<5)
//			{
//				printf("\n");
//				printf("\n");
//			}
//
//		}
//
//	}
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	int arr[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	for (i = 0; i<12; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}


int main()
{
	/*int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);*/

	int n = 0;
	scanf("%d", &n);
	int date = n % 100;
	int month = (n / 100) % 100;
	int year = n / 10000;
	printf("year=%d\nmonth=%02d\ndate=%02d\n",year,month,date);
	return 0;
}