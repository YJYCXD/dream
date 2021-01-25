#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//菜单函数
void menu()
{
	printf("**********************************\n");
	printf("**********    1. play    *********\n");
	printf("**********    0. exit    *********\n");
	printf("**********************************\n");
}
//游戏函数
void game()
{
	//定义两个数组：一个数组用来布置雷，一个数组用来展示排雷的信息
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//先将两个数组初始化,放置雷的数组初始化为字符'0'
	//展示排雷信息的数组初始化为'*'
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印两个数组
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//对雷进行布置
	Put_Mine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//排雷函数
	Calu_Mine(mine, show, ROW, COL);
	
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
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误，请重新选择\n");
			break;
		}
		
	} while (input);
	
	return 0;

}