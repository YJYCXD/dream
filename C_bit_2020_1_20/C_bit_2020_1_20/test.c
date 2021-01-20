#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********1.   play   ***********\n");
//	printf("**********0.   exit   ***********\n");
//}
//
//void game()
//{
//	int n = ((rand())%100)+1;
//	int a = 0;
//	
//	while (1)
//	{
//		printf("请输入：>");
//		scanf("%d", &a);
//		if (a > n)
//		{
//			printf("大了\n");
//
//		}
//		else if (a < n)
//		{
//			printf("小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	//printf("%d\n", n);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	//猜数字游戏至少要执行一次，因此用do-while循环
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//		}
//	} while (input);
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	system("shutdown -s -t 60");
	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
	
	
again:
	char input[10] = { 0 };
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}