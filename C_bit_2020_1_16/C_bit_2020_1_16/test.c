#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int n = 100;
//	int i = 0;
//	//这个代码会循环100次，并且有100次判断，效率不高
//	/*for (i = 1; i <= n; i++)
//	{
//		//if (i % 2 != 0)//记住如果写等式，把常量写在左边，变量写在右边
//		if (1==i % 2)  
//			printf("%d ", i);
//	}*/
//
//	//这样写只用循环50次，并且不需要判断
//	for (i = 1; i <= n; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码;>");
//	scanf("%s", password);
//	int ch = 0;//用int定义ch是因为EOF返回的是-1，char不能接收-1
//	while ((ch = getchar()) != '\n')  //用while循环来清空缓冲区，最后的'\n'也会被读走
//	{
//		;
//	}
//
//	printf("请确认(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}

//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	//printf("请输入一个整数：>");
//	//scanf("%d", &n);
//	//这种算法整体太重复
//	//知道1的阶乘就可以计算2的阶乘
//	//2!=1!*2,3!=2!*3等等
//
//	/*for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}*/
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//二分查找(折半查找)
//必须是有序的序列
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	return 0;
}