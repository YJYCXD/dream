#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#pragma pack(4)
//
//int main()
//{
//	struct tagTest1
//	{
//		short a;
//		char d; 
//		long b;
//		long c;
//	};
//
//	struct tagTest2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//
//	struct tagTest3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//
//	return 0;
//}
//
//#pragma pack()

int fun(int x, int y)
{
	static int m = 0;
	static int i = 2;
	i += m + 1;
	m = i + x + y;
	return m;
}

int main()
{
	int j = 4;
	int m = 1;
	int k = 0;
	k = fun(j, m);
	printf("%d,", k);
	k = fun(j, m);
	printf("%d\n", k);
	return 0;
}