#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//�ݹ�ʵ�ִ�ӡһ������ÿһλ
//��ӡÿһλ����Ҫ��ÿһλ���в��
//�����������𵽲��ܲ�Ϊֹ��Ҳ���ǵ���λ
//ÿ�γ���10����һλ
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
//	printf("������һ������:>\n");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

////��׳�
////1.�÷ǵݹ�ķ�����׳�
////2.�ݹ�ķ�����׳�
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
////�ݹ�ķ�����
////����������һ��Ҫ��n>=1
////ʹn���ϼ�С��ֱ���ӽ����������������n++�Ļ��������������Ͳ�����
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
//	printf("������һ��������>\n");
//	scanf("%d", &n);
//	int ret1 = ifac_recursion(n);
//	printf("�ǵݹ飺�׳�Ϊ%d\n", ret1);
//	int ret2 = fac_recursion(n);
//	printf("�ݹ飺�׳�Ϊ%d\n", ret2);
//	return 0;
//}

////strlen�ĵݹ�ͷǵݹ��ʵ��
////1.�ݹ�ʵ��
////2.�ǵݹ�ʵ��
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
////�õݹ�ķ���ʵ��strlen
////�����������ҵ�'\0'Ϊֹ
////�ַ�����ָ����ַ���������ƣ����Ͻӽ���������
////����ʹ�ñ��������м�������Ϊ�ǿ纯���ģ��ñ�������鷳
////����ÿ����һ�κ������ԣ�Ҳ����˵�ַ���ǰһλû�ҵ�'\0'�����ȼ�1
//int fac_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + fac_strlen(str+1);//�ڵ��ú���ʱ������++
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	printf("������һ���ַ�(����20��)\n");
//	scanf("%s", arr);//scanfֻ�ܼ�⵽�ո�֮ǰ
//	int len1 = ifac_strlen(arr);
//	printf("len1=%d\n", len1);
//	int len2 = fac_strlen(arr);
//	printf("len2=%d\n", len2);
//	return 0;
//}


//
//�õݹ�ʵ���ַ�������
//�����������ҵ�'\0'
//�ַ�����ǰ������
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
//	printf("�������ַ���:>\n");
//	scanf("%s", arr);
//	reverse_string(arr);
//	return 0;
//}

////�õݹ�ʵ�ּ���ÿλ��֮��
////˼����ǽ�ÿһλ������
////�����������𵽸�λ
////ÿ�γ�10����һλ
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
//	printf("������һ������ : >\n");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//
////�õݹ�ʵ��n��k�η�
////����������k>0
////ÿ�μ�Сk
////���⻹Ҫ����k�����������k�Ǹ��ģ���ô����ֵ����һ��С��
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
//	printf("������n��k:>\n");
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

////�õݹ�ͷǵݹ�ķ�������쳲�������
////쳲��������й���
////n<=2ʱ�����Ϊ1
////n>2ʱ�����Ϊǰ������֮��
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
//	printf("��������Ҫ֪����쳲���������>\n");
//	scanf("%d", &n);
//	int ret1 = ifac_Feb(n);
//	printf("ret1=%d\n", ret1);
//	int ret2 = fac_Feb(n);
//	printf("ret2=%d\n", ret2);
//	//���˿μ�֮��
//	int ret3 = ifac_Feb1(n);
//	printf("������������ret3=%d\n",ret3);
//	return 0;
//}