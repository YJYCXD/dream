#define _CRT_SECURE_NO_WARNINGS 1

//��ɸѡ����n���ڵ�������
//ɸѡ��������Ϊ����2~n֮������������������ڴ洢����������2֮��������ܱ�2����������0��
//�ٽ�3֮��������ܱ�3����������0 ���Դ����ƣ�ֱ��nΪֹ�������в�Ϊ0 ������Ϊ������

//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[101] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i<n + 1; i++)
//		arr[i] = i;
//
//	for (i = 2; i<n + 1; i++)
//	{
//		if (0 == arr[i])
//			continue;
//		int j = 0;
//		for (j = 2 * i; j<n + 1; j += i)
//		{
//			arr[j] = 0;
//		}
//	}
//	int count = 0;
//	for (i = 2; i<n + 1; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//		else
//			count++;
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}


//����������ͬ��С�ĺڰ�ͼ����0-1���󣩱�ʾ�������ǵ����ƶȡ�
//������ͼ������ͬλ���ϵ����ص���ɫ��ͬ����������ڸ�λ�þ�����ͬ�����ص㡣
//����ͼ������ƶȶ���Ϊ��ͬ���ص���ռ�����ص����İٷֱȡ�

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i<m; i++)
//	{
//		int j = 0;
//		for (j = 0; j<n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i<m; i++)
//	{
//		int j = 0;
//		for (j = 0; j<n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i<m; i++)
//	{
//		int j = 0;
//		for (j = 0; j<n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//				count++;
//		}
//	}
//	printf("%.2f", (count*100.0 / (m*n)));
//	return 0;
//}


//�и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin�����û������û��������룬�ж��Ƿ��¼�ɹ���

#include <stdio.h>
#include <string.h>
int main()
{
	char user[10] = { 0 };
	char password[10] = { 0 };
	scanf("%s%s", user, password);
	if (0 == strcmp(user, "admin") && 0 == strcmp(password, "admin"))
		printf("Login Success!\n");
	else
		printf("Login Fail!\n");
	return 0;
}