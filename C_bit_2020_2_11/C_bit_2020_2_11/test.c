#define _CRT_SECURE_NO_WARNINGS 1

//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）,（14和61）,（146和1),
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：655 = 6 * 55 + 65 * 5
//求出 5位数中的所有 Lily Number。
//
//#include <stdio.h>
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum3 = 0;
//	int sum4 = 0;
//	int i = 0;
//	for (i = 10000; i<100000; i++)
//	{
//		sum1 = (i / 10000)*(i % 10000);
//		sum2 = (i / 1000)*(i % 1000);
//		sum3 = (i / 100)*(i % 100);
//		sum4 = (i / 10)*(i % 10);
//		if (sum1 + sum2 + sum3 + sum4 == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//改变一下，可以计算任意所有的变种水仙花
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 1;
//	int t = 0;
//	int mod = 0;
//	int sum = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		//每一次循环要将sum、count重新初始化，否则就是上一次的结果
//		t = i;
//		sum = 0;
//		count = 1;
//		while (t / 10)
//		{
//			count++;
//			t /= 10;
//		}
//		t = i;
//		mod = (int)pow(10, count-1);
//		while (mod>9)
//		{
//			sum += (i / mod)*(i%mod);
//			mod /= 10;
//		}
//		if (i < 10)
//			sum = i;
//		if (sum == i)
//			printf("%d ", i);
//
//	}
//	return 0;
//}



//期中考试开始了，大家都想取得好成绩，争夺前五名。
//从键盘输入n个学生成绩（不超过40个），输出每组排在前五高的成绩。

//#include <stdio.h>
//int main()
//{
//	int score[40] = { 0 };
//	int n = 0;
//	int i = 0;
//	int flag = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//		scanf("%d", &score[i]);
//	for (i = 0; i<n - 1; i++)
//	{
//
//		int j = 0;
//		for (j = 0; j<n - i - 1; j++)
//		{
//			if (score[j]<score[j + 1])
//			{
//				flag = 1;
//				int t = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = t;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	for (i = 0; i<5; i++)
//		printf("%d ", score[i]);
//	return 0;
//}

//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.

//#include <stdio.h>
//int main()
//{
//	char tickets[100];
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i<100; i++)
//	{
//		scanf("%c", &tickets[i]);
//		if (tickets[i] == 'A')
//			count1++;
//		if (tickets[i] == 'B')
//			count2++;
//		if (tickets[i] == '0')
//			break;
//	}
//	if (count1>count2)
//		printf("A\n");
//	else if (count1<count2)
//		printf("B\n");
//	else
//		printf("E\n");
//	return 0;
//} 


//KiKi想知道他的考试成绩是否完美，请帮他判断。
//从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。

//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 90 && score <= 100)
//			printf("Perfect\n");
//	}
//	return 0;
//}

//KiKi想知道他的考试分数是否通过，请帮他判断。从键盘任意输入一个整数表示的分数，
//编程判断该分数是否在及格范围内，如果及格，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。


//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}


//KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字母称为辅音，
//请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int ch = 0;
//	while (~scanf("%c", &ch))
//	{
//		getchar();
//		ch = tolower(ch);
//		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//			printf("Vowel\n");
//		else
//			printf("Consonant\n");
//	}
//	return 0;
//}


//KiKi想判断输入的字符是不是字母，请帮他编程实现。

#include <stdio.h>
int main()
{
	char ch = 0;
	while (~scanf("%c", &ch))
	{
		getchar();
		if (isalpha(ch))
			printf("%c is an alphabet.\n", ch);
		else
			printf("%c is not an alphabet.\n", ch);
	}
	return 0;
} 