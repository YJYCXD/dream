#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()  
{
	printf("****************************************\n");
	printf("*********1.play      0.return **********\n");
	printf("****************************************\n");

	//用户输入并执行
	

}
//整个游戏的功能
void game()
{
	int ret = 0;
	//数组-存放走棋的信息
	char board[ROW][COL] = { 0 };//定义棋盘
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		//C为继续下棋
		if (ret != 'C')
		{
			break;
		}

		//如果不是C，则游戏已经有结果，跳出循环
		//将返回值设为*和#，为了可以简化程序，只需要返回相等的时候某个元素就可以知道谁赢了
		
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}

void test()
{
	int x = 0;

	printf("请输入想要进行的操作：");
	do{
		menu();
		scanf("%d", &x);
		printf("\n");
		switch (x)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (x);
}
int main()
{
	srand((unsigned int)time(NULL));//以时间戳来设置随机数
	test();
	return 0;
}