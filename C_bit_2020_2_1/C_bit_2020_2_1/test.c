#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}
//

//long long fac(int n)
//{
//	int i = 0;
//	long long ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("��ӡ�����������:>\n");
//	scanf("%d", &n);
//	printf("��%d��������ǣ�\n",n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		long long n1=fac(i - 1);
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			long long m1 = fac(j - 1);
//			long long q = fac(i - j);
//			printf("%2lld ", n1 / (m1*q));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#include <stdio.h>

//int main()
//{
//	int n = 1;
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	printf("1\n");//��һ�бȽ����⣬�����ӡ����
//	for (i = 2; i <= a; i++)
//	{
//		n = 1;
//		printf("1 ");//ÿһ�е����߶���1
//		for (j = 1; j <= i - 2; j++)
//		{
//			n = (i - j)*n / j;
//			printf("%d ", n);
//		}
//		printf("1\n");
//	}
//	return 0;
//}


//int main()
//{
//	int killer[4] = { 0 };//Ĭ���ĸ��˶���������
//	//��ÿһ��������б���
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		//����һ����˵���Ǽٻ�
//		killer[i] = 1;
//		if ((killer[0] != 1) + (killer[2] == 1) + (killer[3] == 1) + (killer[3] != 1) == 3)
//		{
//			break;
//		}
//		killer[i] = 0;//���û������ѭ����˵��˵�����滰
//	}
//	printf("%d\n", i+1);//A�ǵ�һ���ˣ�D�ǵ��ĸ���
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	//��5��ѭ�������п��ܽ��б���
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (a*b*c*d*e == 120)//Ҫ����ÿ�������β��ظ�
//						{
//							if (((a == 3) + (b == 2) == 1) &&
//								((b == 2) + (e == 4) == 1) &&
//								((c == 1) + (d == 2) == 1) &&
//								((d == 3) + (c == 5) == 1) &&
//								((e == 4) + (a == 1) == 1))//��һ�����㣬����߼���ӵĽ��Ϊ1
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//
//	int a = 20;
//	int b = -10;
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}

//���ʲô��
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;//��һ��������
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

int main()
{
	int i = 0;
	int score[3] = { 0 };
	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
	{
		int max = 0;//ÿ�����룬��max����
		for (i = 0; i < 3; i++)
		{
			if (score[i] > 0)
				max = score[i];
		}
		printf("%d\n", max);
	}
	return 0;
}