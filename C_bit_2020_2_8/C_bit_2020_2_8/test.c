#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "***************";
//	char arr2[] = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//int main()
//{
//	char arr1[20] = "hikgjjk";
//	char arr2[] = "abcdef";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hikgjjk";
//	char arr2[] = "abcdef";
//	int ret=strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//
//	int i = 0;
//	while (~scanf("%d", &n))
//	{
//		int ret = 1;//每次要将ret复位，否则下一次计算会用上次的计算结果
//		for (i = 0; i<n; i++)
//			ret = ret << 1;//可以用移位运算符来实现乘法和除法
//
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，
//并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	int count = 0;
//	while (~scanf("%d%d%d", &n, &h, &m))
//	{
//		count = m / h;//m/h是m分钟内能喝完几瓶
//		if (m%h)//m%h是判断喝完之后是否正在喝下一瓶
//			count++;
//		printf("%d\n", n - count);
//	}
//
//	return 0;
//}


//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。

#include <stdio.h>
int main()
{
	//int grade[5] = { 0 };
	//int i = 0;
	//int sum = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	scanf("%d", &grade[i]);
	//	sum += grade[i];
	//}

	//printf("%.1f\n", sum / 5.0);


	return 0;
}