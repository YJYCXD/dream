#define _CRT_SECURE_NO_WARNINGS 1

//用筛选法求n以内的素数。
//筛选法求解过程为：将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，
//再将3之后的所有能被3整除的数清0 ，以此类推，直到n为止。数组中不为0 的数即为素数。

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


//给出两幅相同大小的黑白图像（用0-1矩阵）表示，求它们的相似度。
//若两幅图像在相同位置上的像素点颜色相同，则称它们在该位置具有相同的像素点。
//两幅图像的相似度定义为相同像素点数占总像素点数的百分比。

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


//有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判断是否登录成功。

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