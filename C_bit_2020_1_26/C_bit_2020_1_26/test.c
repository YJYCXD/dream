#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 4
#define COL 4

#include <stdio.h>

//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s;
//	struct Stu* ps = &s;
//	printf("%s", ps->name);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//������٣�
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c = 0;
//	while (scanf("%c", &c) != EOF)//����ط�Ҳ����д��while(~(scanf("%c",&c)))����while(~(ch=getchar()));
//		                          //��getchar��ͬ������������Ϊ���������\n�������if���
//	{
//		if (c >= 'a'&&c <= 'z')
//		{
//			c = c - 32;
//			printf("%c\n", c);
//
//		}
//
//		else if (c >= 'A'&&c <= 'Z')
//		{
//			c = c + 32;
//			printf("%c\n", c);
//		}
//	}
//	return 0;
//}
// 


get_two(int a)
{
	int m = 0;
	int t = a;
	int i = 0;
	for (i = 0; i < 32; i+=2)
	{
		m = a & 1;


	}
}
int main()
{
	int a = 0;
	printf("����������:>\n");
	scanf("%d", &a);
	get_two(a);
	return 0;
}