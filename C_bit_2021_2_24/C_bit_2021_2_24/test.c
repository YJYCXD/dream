#define _CRT_SECURE_NO_WARNINGS 1

//����n�����������У�Ҫ���������н���ȥ�ز�����
//��νȥ�أ���ָ�����������ÿ���ظ����ֵ�������ֻ����������һ�γ��ֵ�λ�ã�ɾ������λ�á�

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


//���������������е����У����������кϲ�Ϊһ���������в������

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

//����һ���༶5��ѧ����5�Ƴɼ������5��ѧ����5�Ƴɼ����ܷ֡�


//#include <stdio.h>
//int main()
//{
//	int count = 5;
//	float score[5] = { 0.0 };
//	float sum = 0.0;
//	int i = 0;
//	while (count)
//	{
//		sum = 0.0;//sumÿһ��ѭ��һ��Ҫ����
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


//KiKi�õ���һ��n��m�еľ�����������֪����x�е�y�е�ֵ�Ƕ��٣��������������������

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

//KiKi���ڵõ�һ������n*m�������������У���������Ҫ����n*m������˳��滮��һ��n��m�еľ�������������������������

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


//KiKi���n��m�еķ���������ҵ������ߵ��˵�λ�ã��������������������

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


//KiKi�õ�������n��m�еľ�������֪�����������Ƿ���ȣ�����ش�����(�����������Ӧ����Ԫ�ض����ʱ�����������)��


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