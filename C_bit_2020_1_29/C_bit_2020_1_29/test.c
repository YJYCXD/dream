#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>
////��һ�������Ƚ����һ��Ԫ�ط��ڵ�һ��
////�ڶ���������һ��Ԫ���ó���
////����������\0��������λ��
////���Ĳ����ݹ����֮�󣬰ѵ�һ��Ԫ�ط������һ��
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);//�ȼ����ַ����ĳ����ҵ����һ��Ԫ��
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	//����ط�������len����2��������һ�����ݹ���ַ����ĳ��ȴ���2�ſ��ԣ������ǵ�ǰ�ַ���
//	//ֻ����һ�εݹ���ַ�������2���ܹ��ٽ��н���������ͻὫ\0������һ�ε��ַ�����
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

////һ�ֿ����ǽ������ֱ�ӷ���
//int find_max1(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
////��һ�������������ʽж��return�����
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

//�����Լ���ļ����㷨
//1.շת�����
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
	while (a != b) //a��b����Ƚ���ѭ���������ȣ�a��b����һ���������Լ��
	{
		//�����ż�������һ��������λΪ0��������Ϊ1
		if (a & 1)//�ж�a�Ƿ�Ϊ����
		{
			if (b & 1)//�ж�b�Ƿ�Ϊ����
			{
				b = (a - b) >> 1;//�൱��(a-b)/2
				a = a - b;//����b=(a-b)/2֮������a-b���ܹ�ʵ��(a+b)/2������������Ϊ��ֹ���
			}
			else
			{
				//aΪ������bΪż��
				b >>= 1;//b/2
			}
		}
		else
		{
			//a��ż��
			if (b & 1)
			{
				//a��ż����b������
				a >>= 1;
				//aΪż����bΪ������֮��Ҫ�Դ�С�����ж�
				if (a < b)
				{
					int t = a;
					a = b;
					b = t;
				}
			}
			else
			{
				//a��b��Ϊż��
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