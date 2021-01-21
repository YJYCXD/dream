#define _CRT_SECURE_NO_WARNINGS 1

//素数-只能被1和它本身整除
//判断i为素数，用2->i-1的数除i

//int main()
//{
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//假设i是素数
//		for (j = 2; j < i; j++)//j的范围是2->i-1
//		{
//			if (0 == i%j)
//			{
//				flag = 0;//表示i不是素数
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//判断i是否为素数的时候
//如果i不是素数，i=a*b
//a和b中一定有一个数字小于等于根号i

//#include <math.h>
//int main()
//{
//	int i = 0;
//	//素数永远不可能是偶数，因此i每次加2，可以使效率更高
//	for (i = 100; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;//假设i是素数
//	
//		for (j = 2; j < sqrt(i); j++)//j的范围是2->i-1
//		{
//			if (0 == i%j)
//			{
//				flag = 0;//表示i不是素数
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	int ret = 1;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (0 == i%j)
//		{
//			//这里可以做优化，如果被整除了，直接返回0
//			/*ret = 0;
//			break;*/
//			return 0;
//		}
//	}
//	return 1;//如果都没有整除，就返回1；
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//#include <stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left+(right-left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//
//#include <stdio.h>
//#include <math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int is_leap_year(int year)
//{
//	return ((0 == year % 4) && (0 != year % 100)) || (0 == year % 400);//这样子写程序效率最高，不需要if来进行判断，直接返回0或者1
//}
//int main()
//{
//	int year = 0;
//	printf("请输入想要判断的闰年：>\n");
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (1 == ret)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}

//#include <stdio.h>
//
//swap(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数：>\n");
//	scanf("%d %d",&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);//要交换整数，就必须在函数里能够改变实参。因此需要传递地址
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


#include <stdio.h>

void print_mult_table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%d =%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("输入乘法口诀表行数和列数：>");
	scanf("%d", &n);
	print_mult_table(n);
	return 0;
}