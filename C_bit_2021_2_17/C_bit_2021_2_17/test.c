#define _CRT_SECURE_NO_WARNINGS 1
#define F(X,Y) ((X)+(Y))

//#include <stdio.h>
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ��
//�������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			if (1 == i || i == n)
//			{
//				for (j = 1; j <= n; j++)
//					printf("* ");
//
//				printf("\n");
//			}
//			else
//			{
//				for (j = 1; j <= n; j++)
//				{
//					if (1 == j || j == n)
//						printf("* ");
//					else
//						printf("  ");
//				}
//				printf("\n");
//			}
//		}
//	}
//
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ��
//�������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= n; j++)
//			{
//				if (i == j || j == 1 || i == n)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף���


//#include <stdio.h>
//int main()
//{
//	int count = 5;
//	float height = 0.0;
//	float sum = 0.0;
//	while ((~scanf("%f", &height)) && count)
//	{
//		sum += height;
//		count--;
//	}
//	printf("%.2f", sum / 5.0);
//	return 0;
//}


//KiKi��֪����ѧ������ѧϰ�����BoBo��ʦ��������ѧ�ڹҵĿ�Ŀ�ۼƵ�ѧ�֣�
//��������ѧ�֣��ж�KiKiѧϰ�����10�����ϣ���Σ��(Danger++)��4~9�֣�Σ��(Danger)��0~3:Good��

//
//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//	if (score <= 3)
//		printf("Good\n");
//	else if (score <= 9)
//		printf("Danger\n");
//	else
//		printf("Danger++\n");
//	return 0;
//}


//���ÿ�������HTTP״̬�������״̬���Ӧ�ĺ���

//#include <stdio.h>
//int main()
//{
//	int HTTP = 0;
//	while (~scanf("%d", &HTTP))
//	{
//		if (200 == HTTP)
//			printf("OK\n");
//		if (202 == HTTP)
//			printf("Accepted\n");
//		if (400 == HTTP)
//			printf("Bad Request\n");
//		if (403 == HTTP)
//			printf("Forbidden\n");
//		if (404 == HTTP)
//			printf("Not Found\n");
//		if (500 == HTTP)
//			printf("Internal Server Error\n");
//		if (502 == HTTP)
//			printf("Bad Gateway\n");
//	}
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ��������ɵ�����������ͼ����

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf("%d ", j);
//
//			printf("\n");
//		}
//	}
//
//	return 0;
//}



//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���
//ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���


//#include <stdio.h>
//int main()
//{
//	int min = 100;
//	int max = 0;
//	int score = 0;
//	int sum = 0;
//	int count = 7;
//	while ((~scanf("%d", &score)) && count)
//	{
//		if (score<min)
//			min = score;
//		if (score>max)
//			max = score;
//		sum += score;
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//	return 0;
//}


//��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������

#include <stdio.h>
int main()
{
	int arr[51] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int num = 0;
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int i = 0;
	scanf("%d", &num);
	for (i = 0; i<n; i++)
	{
		if (num <= arr[i])
		{
			for (int j = n; j>i; j--)
			{
				arr[j] = arr[j - 1];
				if (j == i + 1)
					arr[j - 1] = num;


			}
			break;
		}
	}
	if (i == n)
		arr[i] = num;
	for (i = 0; i <= n; i++)
		printf("%d ", arr[i]);
	return 0;
}