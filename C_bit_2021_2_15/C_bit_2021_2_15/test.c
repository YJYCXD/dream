#define _CRT_SECURE_NO_WARNINGS 1

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵķ�ת������ͼ����


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
//			for (j = 1; j <= i - 1; j++)
//				printf(" ");
//			for (j = i; j <= n; j++)
//				printf("* ");
//
//			printf("\n");
//
//		}
//	}
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�����ͼ����


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		//��ӡ�ϰ벿��
//		for (i = 1; i <= (n + 1); i++)
//		{
//			int j = 0;
//			for (j = i; j <= n; j++)
//				printf(" ");
//			for (j = 1; j <= i; j++)
//				printf("* ");
//
//			printf("\n");
//		}
//
//		//��ӡ�°벿��
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf(" ");
//
//			for (j = i; j <= n; j++)
//				printf("* ");
//
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�K��ͼ����


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		//�ϰ벿��
//		for (i = 1; i <= (n + 1); i++)
//		{
//			int j = 0;
//			for (j = i; j <= (n + 1); j++)
//				printf("* ");
//
//
//			for (j = 1; j <= i; j++)//��ͼ���ĺ��油�ո�
//				printf(" ");
//
//			printf("\n");
//		}
//
//		//�°벿��
//		for (i = 2; i <= (n + 1); i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf("* ");
//
//			for (j = i; j <= (n + 1); j++)//���ո�
//				printf(" ");
//
//
//
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵļ���ͼ����


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		//�ϰ벿��
//		for (i = 1; i <= (n + 1); i++)
//		{
//			int j = 0;
//			for (j = i; j <= n; j++)
//				printf("  ");
//
//			for (j = 1; j <= i; j++)
//				printf("*");
//			printf("\n");
//		}
//
//		//�°벿��
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//				printf("  ");
//			for (j = i; j <= n; j++)
//				printf("*");
//
//			printf("\n");
//		}
//	}
//	return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵķ�б����ͼ����
//
//#include <stdio.h>
//int main()
//{
	//int n = 0;
	//int i = 0;
	//while (~scanf("%d", &n))
	//{
	//	for (i = 1; i <= n; i++)
	//	{
	//		int j = 0;
	//		for (j = 1; j<i; j++)
	//			printf(" ");
	//		printf("*");

	//		for (j = i; j <= n; j++)
	//			printf(" ");

	//		printf("\n");
//
//		}
//	}
//	return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ���б����ͼ����

//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i; j<n; j++)
//				printf(" ");
//			printf("*");
//			for (j = 1; j <= i; j++)
//				printf(" ");
//
//			printf("\n");
//		}
//	}
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����

#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	while (~scanf("%d", &n))
	{
		for (i = 1; i <= n; i++)
		{
			//i=jʱ��ӡ*��j=n-i-1ʱ��ӡ*
			int j = 0;
			for (j = 1; j <= n; j++)
			{

				if (j == i || j == n - i + 1)
					printf("*");
				else
					printf(" ");

			}

			printf("\n");
		}
	}
	return 0;
}