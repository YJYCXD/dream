#define _CRT_SECURE_NO_WARNINGS 1

//�ڼ���BMI��BodyMassIndex ����������ָ�����İ��������ϣ��ж��������ݳ̶�
//BMI=����(����)/(���(��)*���(��))


//#include <stdio.h>
//int main()
//{
//	int weight = 0;
//	int height = 0;
//	double BMI = 0.0;
//	while (~scanf("%d%d", &weight, &height))
//	{
//		BMI = weight / ((height / 100.0)*(height / 100.0));
//		if (BMI<18.5)
//			printf("Underweight\n");
//		else if (BMI <= 23.9)
//			printf("Normal\n");
//		else if (BMI <= 27.9)
//			printf("Overweight\n");
//		else
//			printf("Obese\n");
//	}
//	return 0;
//}



//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ���
//��a = 0ʱ�������Not quadratic equation������a �� 0ʱ�����ݡ� = b2 - 4*a*c������������㲢������̵ĸ���


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	while (~scanf("%f%f%f", &a, &b, &c))
//	{
//		if (0 == a)
//			printf("Not quadratic equation\n");
//		else
//		{
//			float delta = b*b - 4 * a*c;
//			if (delta == 0)
//			{
//				float x1 = -b / (2 * a);
//				printf("x1=x2=%.2f\n", x1);
//			}
//			else if (delta>0)
//			{
//				float x1 = (-b - sqrt(delta)) / (2 * a);
//				float x2 = (-b + sqrt(delta)) / (2 * a);
//				printf("x1=%.2f;x2=%.2f\n", x1, x2);
//			}
//			else
//			{
//				float r = -b / (2 * a);
//				float i = sqrt(-delta) / (2 * a);
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi", r, i, r, i);
//			}
//		}
//	}
//
//
//	return 0;
//}


//KiKiʵ��һ���򵥼�������ʵ���������ġ��Ӽ��˳������㣬�û��Ӽ���������ʽ��������1�����������2�������㲢������ʽ��ֵ��
//��������������Ų������ڣ�+��-��*��/����Χ�ڣ������Invalid operation!�����������Ϊ�������㣬����/��ʱ��
//���������2����0.0���������Wrong!Division by zero!��

//#include <stdio.h>
//int main()
//{
//	double o1 = 0.0;
//	double o2 = 0.0;
//	char c = 0;
//	while (~scanf("%lf%c%lf", &o1, &c, &o2))
//	{
//
//		switch (c)
//		{
//		case '+':
//			printf("%.4lf%c%.4lf=%.4lf\n", o1, c, o2, o1 + o2);
//			break;
//		case '-':
//			printf("%.4lf%c%.4lf=%.4lf\n", o1, c, o2, o1 - o2);
//			break;
//		case '*':
//			printf("%.4lf%c%.4lf=%.4lf\n", o1, c, o2, o1*o2);
//			break;
//		case '/':
//			if (0 == o2)
//			{
//				printf("Wrong!Division by zero!\n");
//				break;
//			}
//			printf("%.4lf%c%.4lf=%.4lf\n", o1, c, o2, o1 / o2);
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//
//	}
//	return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ��߶�ͼ����

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 1; i <= n; i++)
//			printf("*");
//
//		printf("\n");
//	}
//	return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�������ͼ����

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
//			for (j = 1; j <= n; j++)
//				printf("* ");
//
//			printf("\n");
//		}
//	}
//	return 0;
//}



//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�ֱ��������ͼ����

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
//				printf("* ");
//
//			printf("\n");
//		}
//	}
//
//	return 0;
//}


//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵķ�תֱ��������ͼ����

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
//			for (j = i; j <= n; j++)
//				printf("* ");
//
//			printf("\n");
//		}
//	}
//	return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵĴ��ո�ֱ��������ͼ����
//
//
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
//			for (j = 1; j <= 2 * (n - i); j++)
//				printf(" ");
//			for (j = 1; j <= i; j++)
//				printf("* ");
//
//
//			printf("\n");
//		}
//	}
//	return 0;
//
//}


//�������룬һ��������2~20������ʾ�������ߵĳ��ȣ�����*������������Ҳ��ʾ�������

#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	while (~scanf("%d", &n))
	{
		for (i = 1; i <= n; i++)
		{
			int j = 0;
			for (j = 1; j <= n - i; j++)
				printf(" ");

			for (j = 1; j <= i; j++)
				printf("* ");

			printf("\n");
		}
	}
	return 0;
}