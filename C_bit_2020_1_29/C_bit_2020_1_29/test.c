#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>
////第一步：首先将最后一个元素放在第一个
////第二步：将第一个元素拿出来
////第三步：把\0放在最后的位置
////第四步：递归完成之后，把第一个元素放在最后一个
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);//先计算字符串的长度找到最后一个元素
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	//这个地方不能是len大于2，而是下一个进递归的字符串的长度大于2才可以，而不是当前字符串
//	//只有下一次递归的字符串大于2才能够再进行交换，否则就会将\0放在上一次的字符串中
//	if (strlen(arr+1) >= 2)
//		reverse_string(arr + 1);
//	*(arr+len-1) = tmp;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////一种可以是将大的数直接返回
//int find_max1(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
////另一种是用条件表达式卸载return语句中
//int find_max2(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max1 = find_max1(a, b);
//	int max2 = find_max2(a, b);
//	printf("max1=%d\n", max1);
//	printf("max2=%d\n", max2);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	double cir = a + b + c;
//	double p = (a + b + c) / 2.0;
//	double area = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("circumference=%.2f,area=%.2f\n", cir, area);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (~scanf("%d%d%d", &a, &b, &c))
//	{
//		if (a + b > c && b + c > a && a + c > b)
//		{
//			if (a == b&&b == c)
//				printf("Equilateral triangle!");
//			else if (a == b || a == c || b == c)
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 5;
//	int n = 0;
//	if (i == 5)
//		if (0 == n)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//求最大公约数的几种算法
//1.辗转相除法
//
//int gcd1(int a, int b)
//{
//	if (a < b)
//	{
//		int m = a;
//		a = b;
//		b = m;
//	}
//	int t = 0;
//	while (a % b != 0)
//	{
//		t = a%b;
//		a = b;
//		b = t;
//	}
//	return b;
//}

//int gcd2(int a, int b)
//{
//	int min = a;
//	if (a > b)
//		min = b;
//	for(int i = min; i > 0; i--)
//	{
//		if (0 == a%i && 0 == b%i)
//			return i;
//	}
//	return 1;
//}

//#include <math.h>
//int gcd3(int a, int b)
//{
//	int count = 0;
//	while (0 == a % 2 && 0 == b % 2)
//	{
//		a /= 2;
//		b /= 2;
//		count++;
//	}
//	if (a < b)
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//
//	while (a - b != b)
//	{
//		int t = a - b;
//		a = b > t ? b : t;
//		b = b < t ? b : t;
//	}
//	
//	if (0 == count)
//		return b;
//	else
//		return (int) pow(2,count) * b;
//}

int gcd4(int a, int b)
{
	int count = 0;
	if (a < b)
	{
		int t = a;
		a = b;
		b = t;
	}
	while (a != b) //a和b不相等进入循环，如果相等，a和b任意一个都是最大公约数
	{
		//如果是偶数，最后一个二进制位为0；奇数则为1
		if (a & 1)//判断a是否为奇数
		{
			if (b & 1)//判断b是否为奇数
			{
				b = (a - b) >> 1;//相当于(a-b)/2
				a = a - b;//上面b=(a-b)/2之后，再用a-b就能够实现(a+b)/2，这样做是因为防止溢出
			}
			else
			{
				//a为奇数，b为偶数
				b >>= 1;//b/2
			}
		}
		else
		{
			//a是偶数
			if (b & 1)
			{
				//a是偶数，b是奇数
				a >>= 1;
				//a为偶数，b为奇数，之后要对大小进行判断
				if (a < b)
				{
					int t = a;
					a = b;
					b = t;
				}
			}
			else
			{
				//a和b均为偶数
				a >>= 1;
				b >>= 1;
				count++;
			}
		}

	}
	return (a << count);

}

int main()
{
	int a = 0;
	int b = 0;
 	scanf("%d%d",&a, &b);
	//int ret1 = gcd1(a, b);
	//int ret2 = gcd2(a, b);
	//int ret3 = gcd3(a, b);
	int ret4 = gcd4(a, b);
	//printf("gcd1=%d\n", ret1);
	//printf("gcd2=%d\n", ret2);
	//printf("gcd3=%d\n", ret3);
	printf("gcd4=%d\n", ret4);
	return 0;
}