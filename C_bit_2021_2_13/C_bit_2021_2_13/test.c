#define _CRT_SECURE_NO_WARNINGS 1

//在计算BMI（BodyMassIndex ，身体质量指数）的案例基础上，判断人体胖瘦程度
//BMI=体重(公斤)/(身高(米)*身高(米))


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



//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，
//当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。


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


//KiKi实现一个简单计算器，实现两个数的“加减乘除”运算，用户从键盘输入算式“操作数1运算符操作数2”，计算并输出表达式的值，
//如果输入的运算符号不包括在（+、-、*、/）范围内，输出“Invalid operation!”。当运算符为除法运算，即“/”时。
//如果操作数2等于0.0，则输出“Wrong!Division by zero!”

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

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。

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

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正方形图案。

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



//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的直角三角形图案。

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


//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转直角三角形图案。

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

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的带空格直角三角形图案。
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


//多组输入，一个整数（2~20），表示金字塔边的长度，即“*”的数量，，也表示输出行数

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