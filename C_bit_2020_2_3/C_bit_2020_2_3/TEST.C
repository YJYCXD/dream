#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 20

//判断一个字符串是否为另一个字符串旋转之后的字符串

#include <stdio.h>
#include <string.h>
//int Is_turn_str(char* str1,const char* str2)
//{
//	if (strlen(str1) != strlen(str2))
//		return 0;
//	int i = 0;
//	while (*(str1 + i + 1) != '\0')
//	{
//		
//		size_t j = 0;
//		for (j = 0; j < strlen(str1) - 1; j++)
//		{
//			char t = *(str1 + j );
//			*(str1 + j) = *(str1 + j + 1);
//			*(str1 + j + 1) = t;
//		}
//		if (strcmp(str1, str2) == 0)
//			return 1;
//		i++;
//	} 
//
//	return 0;
//	
//}
//int main()
//{
//	char arr1[SIZE] = { 0 };
//	char arr2[SIZE] = { 0 };
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//	int ret = Is_turn_str(arr1, arr2);
//	if (1 == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}


//char* Turn(char* str, int k)
//{
//	int i = 0;
//	while (i < k)
//	{
//
//		size_t j = 0;
//		for (j = 0; j < strlen(str)-1; j++)
//		{
//			char t = *(str + j);
//			*(str + j) = *(str + j + 1);
//			*(str + j + 1) = t;
//		}
//		i++;
//	}
//	return str;
//}
//int main()
//{
//	int k = 0;
//	char arr[SIZE] = { 0 };
//	printf("请输入字符串：\n");
//	scanf("%s", arr);
//	printf("请输入要旋转的次数:\n");
//	scanf("%d", &k);
//	Turn(arr, k);
//	printf("左旋%d个字符之后为：> %s\n", k, arr);
//	return 0;
//}

//void find_num(int(*arr)[5], int n, int row, int col)
//{
//	int i = 0;
//	int left = 0;
//	int right = col - 1;
//	int ret = 0;
//	for (i = 0; i < row; i++)
//	{
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[i][mid] > n)
//			{
//				right = mid - 1;
//			}
//			else if (arr[i][mid] < n)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				ret = 1;
//				printf("找到了，下标是arr[%d][%d]\n", i, mid);
//				break;
//			}
//		}
//		left = 0;
//		right = col - 1;
//	}
//
//	if (0 == ret)
//	{
//		printf("没找到\n");
//	}
//}



//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int col = sizeof(arr[0])/sizeof(arr[0][0]);
//	int n = 0;
//	scanf("%d", &n);
//	find_num(arr, n, row, col);
//	return 0;
//}

//更简便的做法
int find_num(int(*arr)[5], int n, int row, int col)
{
	//从右上角开始
	/*int i = 0;
	int j = col - 1;
	while (j >= 0 && i < col)
	{
		if (arr[i][j] < n)
			i++;
		else if (arr[i][j]>n)
			j--;
		else
			return 1;
	}*/

	//从左下角开始
	int i = row - 1;
	int j = 0;
	while (i >= 0 && j < col)
	{
		if (arr[i][j] < n)
			j++;
		else if (arr[i][j]>n)
			i--;
		else
			return 1;
	}
	return 0;
}

int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	int n = 0;
	scanf("%d", &n);
	int ret = find_num(arr, n, row, col);
	if (1 == ret)
		printf("找到了\n");
	else
		printf("没找到\n");
	return 0;
}