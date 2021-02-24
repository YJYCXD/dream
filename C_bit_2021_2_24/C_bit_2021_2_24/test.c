#define _CRT_SECURE_NO_WARNINGS 1

//输入n个整数的序列，要求对这个序列进行去重操作。
//所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	int i = 0;
//	int t = n;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	for (i = 0; i < n; i++)
//	{
//		int ptr1 = i + 1;
//		int ptr2 = i + 1;
//		while (ptr1 < n)
//		{
//			if (arr[ptr1] != arr[i])
//			{
//				arr[ptr2] = arr[ptr1];
//				ptr1++;
//				ptr2++;
//			}
//			else
//			{
//				ptr1++;
//				t--;
//			}
//		}
//		n = t;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}


//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &n, &m);
//	int* arr1 = (int*)malloc(sizeof(int) * n);
//	int* arr2 = (int*)malloc(sizeof(int) * m);
//	int* arr3 = (int*)malloc(sizeof(int) * (n + m));
//	int ptr1 = 0;
//	int ptr2 = 0;
//	int ptr3 = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr1[i]);
//	for (i = 0; i < m; i++)
//		scanf("%d", &arr2[i]);
//	while (ptr1 < n && ptr2 < m)
//	{
//		if (arr1[ptr1] < arr2[ptr2])
//		{
//			arr3[ptr3] = arr1[ptr1];
//			ptr1++;
//			ptr3++;
//		}
//		else
//		{
//			arr3[ptr3] = arr2[ptr2];
//			ptr2++;
//			ptr3++;
//		}
//	}
//
//	if (ptr1 == n)
//	{
//		while (ptr2 < m)
//		{
//			arr3[ptr3] = arr2[ptr2];
//			ptr2++;
//			ptr3++;
//		}
//	}
//	else if (ptr2 == m)
//	{
//		while (ptr1 < n)
//		{
//			arr3[ptr3] = arr1[ptr1];
//			ptr1++;
//			ptr3++;
//		}
//	}
//	for (i = 0; i < (n + m); i++)
//		printf("%d ", arr3[i]);
//
//	free(arr1);
//	arr1 = NULL;
//	free(arr2);
//	arr2 = NULL;
//	free(arr3);
//	arr3 = NULL;
//	return 0;
//}

//输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。


//#include <stdio.h>
//int main()
//{
//	int count = 5;
//	float score[5] = { 0.0 };
//	float sum = 0.0;
//	int i = 0;
//	while (count)
//	{
//		sum = 0.0;//sum每一次循环一定要重置
//		for (i = 0; i < 5; i++)
//		{
//			scanf("%f", &score[i]);
//			sum += score[i];
//		}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%.1f ", score[i]);
//		}
//		printf("%.1f\n", sum);
//		count--;
//	}
//	return 0;
//}


//KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务。

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	scanf("%d%d", &x, &y);
//	printf("%d\n", arr[x - 1][y - 1]);
//	return 0;
//}

//KiKi现在得到一个包含n*m个数的整数序列，现在他需要把这n*m个数按顺序规划成一个n行m列的矩阵并输出，请你帮他完成这个任务。

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr[100] = { 0 };
//	int t = n * m;
//	int Darr[10][10] = { 0 };
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < t; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			Darr[i][j] = arr[k];
//			k++;
//		}
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//			printf("%d ", Darr[i][j]);
//
//		printf("\n");
//	}
//	return 0;
//}	


//KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务。

//#include <stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > max)
//				max = arr[i][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] == max)
//				printf("%d %d\n", i + 1, j + 1);
//		}
//	}
//	return 0;
//}


//KiKi得到了两个n行m列的矩阵，他想知道两个矩阵是否相等，请你回答他。(当两个矩阵对应数组元素都相等时两个矩阵相等)。


#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int arr1[10][10] = { 0 };
	int arr2[10][10] = { 0 };
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			scanf("%d", &arr1[i][j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			scanf("%d", &arr2[i][j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr1[i][j] != arr2[i][j])
			{
				ret = 1;
				break;

			}
		}
	}
	if (0 == ret)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}