#define _CRT_SECURE_NO_WARNINGS 1

//����-ֻ�ܱ�1������������
//�ж�iΪ��������2->i-1������i

//int main()
//{
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;//����i������
//		for (j = 2; j < i; j++)//j�ķ�Χ��2->i-1
//		{
//			if (0 == i%j)
//			{
//				flag = 0;//��ʾi��������
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

//�ж�i�Ƿ�Ϊ������ʱ��
//���i����������i=a*b
//a��b��һ����һ������С�ڵ��ڸ���i

//#include <math.h>
//int main()
//{
//	int i = 0;
//	//������Զ��������ż�������iÿ�μ�2������ʹЧ�ʸ���
//	for (i = 100; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;//����i������
//	
//		for (j = 2; j < sqrt(i); j++)//j�ķ�Χ��2->i-1
//		{
//			if (0 == i%j)
//			{
//				flag = 0;//��ʾi��������
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
//			//����������Ż�������������ˣ�ֱ�ӷ���0
//			/*ret = 0;
//			break;*/
//			return 0;
//		}
//	}
//	return 1;//�����û���������ͷ���1��
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
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
//	return ((0 == year % 4) && (0 != year % 100)) || (0 == year % 400);//������д����Ч����ߣ�����Ҫif�������жϣ�ֱ�ӷ���0����1
//}
//int main()
//{
//	int year = 0;
//	printf("��������Ҫ�жϵ����꣺>\n");
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (1 == ret)
//		printf("������\n");
//	else
//		printf("��������\n");
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
//	printf("����������������>\n");
//	scanf("%d %d",&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);//Ҫ�����������ͱ����ں������ܹ��ı�ʵ�Ρ������Ҫ���ݵ�ַ
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
	printf("����˷��ھ���������������>");
	scanf("%d", &n);
	print_mult_table(n);
	return 0;
}