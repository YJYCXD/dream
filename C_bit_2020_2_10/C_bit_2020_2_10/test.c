#define _CRT_SECURE_NO_WARNINGS 1

//����һ��ʮ��������a����һ���˽�����b�����a+b��ʮ���ƽ������Χ-231~231-1��
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%x %o", &a, &b);
	printf("%d", a + b);
	return 0;
}