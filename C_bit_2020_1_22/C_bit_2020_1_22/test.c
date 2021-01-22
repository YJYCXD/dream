#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//递归实现打印一个数的每一位
//打印每一位就是要把每一位进行拆分
//限制条件：拆到不能拆为止，也就是到个位
//每次除以10丢掉一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数:>\n");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

////求阶乘
////1.用非递归的方法求阶乘
////2.递归的方法求阶乘
//
//int ifac_recursion(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
////递归的方法：
////限制条件：一定要是n>=1
////使n不断减小，直到接近限制条件，如果是n++的话，那限制条件就不好想
//int fac_recursion(int n)
//{
//	if (n > 1)
//	{
//		return n*ifac_recursion(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//		
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：>\n");
//	scanf("%d", &n);
//	int ret1 = ifac_recursion(n);
//	printf("非递归：阶乘为%d\n", ret1);
//	int ret2 = fac_recursion(n);
//	printf("递归：阶乘为%d\n", ret2);
//	return 0;
//}

////strlen的递归和非递归的实现
////1.递归实现
////2.非递归实现
////
//int ifac_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
////用递归的方法实现strlen
////限制条件：找到'\0'为止
////字符串所指向的字符不断向后移，不断接近限制条件
////不能使用变量来进行计数，因为是跨函数的，用变量会很麻烦
////可以每进入一次函数加以，也就是说字符向前一位没找到'\0'，长度加1
//int fac_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + fac_strlen(str+1);//在调用函数时不能用++
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	printf("请输入一串字符(少于20个)\n");
//	scanf("%s", arr);//scanf只能检测到空格之前
//	int len1 = ifac_strlen(arr);
//	printf("len1=%d\n", len1);
//	int len2 = fac_strlen(arr);
//	printf("len2=%d\n", len2);
//	return 0;
//}


//
//用递归实现字符串逆序
//限制条件：找到'\0'
//字符串从前向后遍历
//
//void reverse_string(char * string)
//{
//	char t = 0;
//	if (*string != '\0')
//	{
//		reverse_string(string + 1);
//		printf("%c", *string);
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	printf("请输入字符串:>\n");
//	scanf("%s", arr);
//	reverse_string(arr);
//	return 0;
//}

////用递归实现计算每位数之和
////思想就是将每一位拆分相加
////限制条件：拆到个位
////每次除10丢掉一位
////
////
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数 : >\n");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//
////用递归实现n的k次方
////限制条件：k>0
////每次减小k
////另外还要考虑k的正负，如果k是负的，那么返回值就是一个小数
//
//float my_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n*my_pow(n,k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	float ret = 0.0f;
//	printf("请输入n和k:>\n");
//	scanf("%d%d", &n, &k);
//	if (k > 0)
//	{
//		ret = my_pow(n, k);
//		printf("ret=%.2f\n", ret);
//	}
//	else if (k < 0)
//	{
//		k = -k;
//		ret = my_pow(n, k);
//		printf("ret=%.2f\n", 1.0/ret);
//	}
//	else
//	{
//		printf("ret=1.00\n");
//	}
//	
//	return 0;
//
//}

////用递归和非递归的方法计算斐波那契数
////斐波那契数列规则：
////n<=2时，结果为1
////n>2时，结果为前两个数之和
//
//
//int ifac_Feb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int t = 3;
//	int ret = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while (t <= n)
//		{
//			ret = a + b;
//			a = b;
//			b = ret;
//			t++;
//		}
//		return ret;
//
//	}
//}
//
//int ifac_Feb1(int n)
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	ret = b = 1;
//	while (n > 2)
//	{
//		n = n - 1;
//		a = b;
//		b = ret;
//		ret = a + b;
//	}
//	return ret;
//}
//
//int fac_Feb(int n)
//{
//	if (n > 2)
//		return fac_Feb(n - 1) + fac_Feb(n - 2);
//	else
//		return 1;
//
//
//}
//int main()
//{
//	int n = 0;
//	printf("请输入想要知道的斐波那契数：>\n");
//	scanf("%d", &n);
//	int ret1 = ifac_Feb(n);
//	printf("ret1=%d\n", ret1);
//	int ret2 = fac_Feb(n);
//	printf("ret2=%d\n", ret2);
//	//看了课件之后
//	int ret3 = ifac_Feb1(n);
//	printf("更简洁的做法：ret3=%d\n",ret3);
//	return 0;
//}