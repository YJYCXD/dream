#define _CRT_SECURE_NO_WARNINGS 1

#include "lowgame.h"
#include "middlegame.h"
#include "highgame.h"

//菜单函数
void menu()
{
	printf("**********************************\n");
	printf("**********    1. play    *********\n");
	printf("**********    0. exit    *********\n");
	printf("**********************************\n");
}

//游戏函数
//void game()
//{
//	//定义两个数组：一个数组用来布置雷，一个数组用来展示排雷的信息
//	char mine[ROWS][COLS];
//	char show[ROWS][COLS];
//
//	//先将两个数组初始化,放置雷的数组初始化为字符'0'
//	//展示排雷信息的数组初始化为'*'
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//	//打印两个数组
//	//DisplayBoard(mine, ROW, COL);
//	DisplayBoard(show, ROW, COL);
//
//	//对雷进行布置
//	Put_Mine(mine, ROW, COL);
//	DisplayBoard(mine, ROW, COL);
//
//	//排雷函数
//	Calu_Mine(mine, show, ROW, COL);
//
//}

void low_game()
{
	//定义两个数组：一个数组用来布置雷，一个数组用来展示排雷的信息
	char mine1[LOW_ROWS][LOW_COLS];
	char show1[LOW_ROWS][LOW_COLS];

	//先将两个数组初始化,放置雷的数组初始化为字符'0'
	//展示排雷信息的数组初始化为'*'
	low_InitBoard(mine1, LOW_ROWS, LOW_COLS, '0');
	low_InitBoard(show1, LOW_ROWS, LOW_COLS, '*');
	//打印两个数组
	//DisplayBoard(mine, ROW, COL);
	low_DisplayBoard(show1, LOW_ROW, LOW_COL);

	//对雷进行布置
	low_Put_Mine(mine1, LOW_ROW, LOW_COL);
	low_DisplayBoard(mine1, LOW_ROW, LOW_COL);

	//排雷函数
	low_Calu_Mine(mine1, show1, LOW_ROW, LOW_COL);

}

void middle_game()
{
	//定义两个数组：一个数组用来布置雷，一个数组用来展示排雷的信息
	char mine2[MIDDLE_ROWS][MIDDLE_COLS];
	char show2[MIDDLE_ROWS][MIDDLE_COLS];

	//先将两个数组初始化,放置雷的数组初始化为字符'0'
	//展示排雷信息的数组初始化为'*'
	middle_InitBoard(mine2, MIDDLE_ROWS, MIDDLE_COLS, '0');
	middle_InitBoard(show2, MIDDLE_ROWS, MIDDLE_COLS, '*');
	//打印两个数组
	//DisplayBoard(mine, ROW, COL);
	middle_DisplayBoard(show2, MIDDLE_ROW, MIDDLE_COL);

	//对雷进行布置
	middle_Put_Mine(mine2, MIDDLE_ROW, MIDDLE_COL);
	middle_DisplayBoard(mine2, MIDDLE_ROW, MIDDLE_COL);

	//排雷函数
	middle_Calu_Mine(mine2, show2, MIDDLE_ROW, MIDDLE_COL);
}

void high_game()
{
	//定义两个数组：一个数组用来布置雷，一个数组用来展示排雷的信息
	char mine3[HIGH_ROWS][HIGH_COLS];
	char show3[HIGH_ROWS][HIGH_COLS];

	//先将两个数组初始化,放置雷的数组初始化为字符'0'
	//展示排雷信息的数组初始化为'*'
	high_InitBoard(mine3, HIGH_ROWS, HIGH_COLS, '0');
	high_InitBoard(show3, HIGH_ROWS, HIGH_COLS, '*');
	//打印两个数组
	//DisplayBoard(mine, ROW, COL);
	high_DisplayBoard(show3, HIGH_ROW, HIGH_COL);

	//对雷进行布置
	high_Put_Mine(mine3, HIGH_ROW, HIGH_COL);
	high_DisplayBoard(mine3, HIGH_ROW, HIGH_COL);

	//排雷函数
	high_Calu_Mine(mine3, show3, HIGH_ROW, HIGH_COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();
		printf("请输入选项：>\n");
		scanf("%d", &input);
		getchar();
		switch (input)
		{
		case 1:
		{
			char n = 0;
			printf("请选择难度:>\n");
			printf("l代表低级，m代表中级，h代表高级\n");
			scanf("%c", &n);
			switch (n)
			{
			case 'l':
				low_game();
				break;
			case 'm':
				middle_game();
				break;
			case 'h':
				high_game();
				break;
			}
			//game();
			break;
		}

		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}

	} while (input);

	return 0;

}