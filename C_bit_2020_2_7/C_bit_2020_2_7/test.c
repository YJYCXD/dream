#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//两种方案
//1.如果没有要求在原字符串上进行替换，就可以新定义一个数组来存放新字符串
//2.如果要求在原字符串进行替换，从前往后替换的话一定会覆盖后面的字符串，那么肯定是从后往前进行替换

//第一种

//char* Turn_space(char* arr,char* str)
//{
//	while (*arr)
//	{
//		if (*arr == ' ')
//		{
//			*str = '%';
//			*(str + 1) = '2';
//			*(str + 2) = '0';
//			str = str + 3;
//		}
//		else
//		{
//			*str = *arr;
//			str++;
//		}
//		arr++;
//	}
//	return str;
//}




//
//
//int main()
//{
//	char arr[] = "abc  def ghi kj";
//	char str[50] = { 0 };
//	Turn_space1(arr,str);
//	printf("%s\n", str);
//	return 0;
//}


//第二种


//void Turn_space2(char* arr,int sz,int count)
//{
//	char* p1 = arr + sz - 1;
//	char* p2 = arr + sz - 1 + count * 2;
//	while (p1 != p2)
//	{
//		if (*p1!=' ')
//		{
//			*p2 = *p1;
//			p2--;
//		}
//		else
//		{
//			*p2 = '0';
//			*(p2 - 1) = '2';
//			*(p2 - 2) = '%';
//			p2 = p2 - 3;
//		}
//		p1--;
//	}
//}
//
//int main()
//{
//	char arr[50] = "abc dgf ju ki";
//	int sz = strlen(arr);
//	int count = 0;
//	int i = 0;
//	while (arr[i])
//	{
//		if (arr[i] == ' ')
//			count++;
//		i++;
//	}
//	Turn_space2(arr,sz,count);
//	printf("%s\n", arr);
//	return 0;
//}



//int main()
//{
//	double** a[3][4];
//	printf("%d\n", sizeof(a));
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char achello[] = "hello\0world";
//	char acnew[15] = { 0 };
//	strcpy(acnew, achello);
//	printf("%d %d\n", strlen(acnew), sizeof(achello));
//	return 0;
//}
//
//int Feb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int ret = 1;
//	while (n > 2)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Feb(n);
//	printf("%d\n", ret);
//	return 0;
//}



//给定一个浮点数，要求得到该浮点数的个位数。

//#include <stdio.h>
//int main()
//{
//	double a = 0.0;
//	scanf("%lf", &a);
//	printf("%d", (int)a % 10);//取得个位数，强制类型转换为int，将小数点抛弃
//	return 0;
//}


//一年约有3.156×107s，要求输入您的年龄，显示该年龄合多少秒。
//该题考查整形的数值范围

//
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	long ret = 0;
//	scanf("%d", &age);
//	ret = age * 31560000;
//	printf("%ld\n", ret);
//	return 0;
//}


//给定秒数seconds(0< seconds < 100, 000, 000)，把秒转化成小时、分钟和秒。

//#include <stdio.h>
//int main()
//{
//	/*int second=0;
//	int hour=0;
//	int minute=0;
//	scanf("%d",&second);
//	hour=second/3600;
//	minute=(second-hour*3600)/60;
//	second=second-hour*3600-minute*60;
//	printf("%d %d %d\n",hour,minute,second);*/
//	int seconds, h, m, s;
//	scanf("%d", &seconds);
//	h = seconds / 3600;//得到小时数
//	m = (seconds % 3600) / 60;//模上3600得到除去小时剩余的秒数，除以60就得到分钟
//	s = (seconds % 3600) % 60;//模上3600得到剩余的秒数，再模上60得到除去分钟剩余的秒数
//	printf("%d %d %d", h, m, s);
//	return 0;
//}


//计算BMI指数（身体质量指数）
//#include <stdio.h>
//int main()
//{
//	int weight = 0;
//	int length = 0;
//	double BMI = 0.0;
//	scanf("%d %d", &weight, &length);
//	//BMI = (double)weight / (length*length)*10000;//这个结果输出为0是因为weight和length都是整形，相除放进浮点型中会出现错误
//	                                             //解决方法：将其中一个数化为double类型
//	                                             //或者length要求是以米为单位，可以除以100.f
//	BMI = weight / ((length / 100.f)*(length / 100.f));
//	printf("%.2lf\n", BMI);
//	return 0;
//}



//给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4/3*πr3，其中 π= 3.1415926。

//#include <stdio.h>
//int main()
//{
//	double r = 0.0;
//	scanf("%lf", &r);
//	printf("%.3f\n", 4 * 3.1415926*r*r*r / 3);
//	return 0;
//}


//针对每组输入输出对应的小写字母。

#include <stdio.h>
#include <string.h>
int main()
{
	char ch = 0;
	while (~(ch = getchar()))

		getchar();//如果没有这个getchar的话，在输入的时候回车也是字母，同样会进行转换，导致结果出错
	              //所以要用geicgar清除缓冲区的换行
		printf("%c\n", tolower(ch));
	}
	return 0;
}