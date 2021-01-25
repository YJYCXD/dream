#define _CRT_SECURE_NO_WARNINGS 1

#include "highgame.h"

//棋盘初始化函数
void high_InitBoard(char board[HIGH_ROWS][HIGH_COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;//将数组定义初始化为想要的字符set
		}
	}
}

//棋盘打印函数
void high_DisplayBoard(char board[HIGH_ROWS][HIGH_COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		if (0 == i)
		{
			printf("   ");
			continue;
		}
		printf("%2d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%2d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%2c ", board[i][j]);

		}
		printf("\n");
	}
}

//放置雷，根据扫雷难度
void high_Put_Mine(char board[HIGH_ROWS][HIGH_COLS], int row, int col)
{
	int count = HIGH_COUNT;
	int x = 0;
	int y = 0;
	while (count > 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')//只有防雷成功，count减一
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//遍历整个棋盘，判断输赢
int high_get_mine(char show[HIGH_ROWS][HIGH_COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}

void high_Sweep(char mine[HIGH_ROWS][HIGH_COLS], char show[HIGH_ROWS][HIGH_COLS], int x, int y)
{
	int count = 0;
	count = mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x - 1][y] + mine[x + 1][y] + mine[x - 1][y + 1] +
		mine[x][y + 1] + mine[x + 1][y + 1] - 8 * '0';
	if (0 == count)
	{
		int i = 0;
		int j = 0;
		show[x][y] = ' ';
		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				//用两组for循环来进行递归，进入递归的条件是在数组能够到达的范围内，并且用show数组中*来减少已经遍历过的元素
				if ((x + i) >= 1 && (x + i) <= HIGH_ROW && (y + j) >= 1 && (y + j) <= HIGH_COL && show[x + i][y + j] == '*')
				{
					high_Sweep(mine, show, x + i, y + j);
				}
			}
		}
	}
	//if (count == 0&&x>=1&&x<=ROW&&y>=1&&y<=COL&&mine[x][y]!=' ')
	//{
	//	show[x][y] = ' ';
	//	Sweep(mine, show, x-1, y-1);
	//	Sweep(mine, show, x, y - 1);
	//	Sweep(mine, show, x + 1, y - 1);
	//	Sweep(mine, show, x - 1, y);
	//	Sweep(mine, show, x + 1, y);
	//	Sweep(mine, show, x - 1, y + 1);
	//	Sweep(mine, show, x, y + 1);
	//	Sweep(mine, show, x + 1, y + 1);

	//}
	else
	{
		show[x][y] = count + '0';
	}
}

//对输入坐标周围的雷数进行计算
void high_Calu_Mine(char mine[HIGH_ROWS][HIGH_COLS], char show[HIGH_ROWS][HIGH_COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = row*col - HIGH_COUNT;
	printf("请输入选择的坐标：\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		printf("\n");
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，此处有雷，光荣牺牲\n");
				break;
			}
			else
			{
				high_Sweep(mine, show, x, y);
				high_DisplayBoard(show, HIGH_ROW, HIGH_COL);
				count = high_get_mine(show, HIGH_ROW, HIGH_COL) - HIGH_COUNT;
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入\n");
		}
	}
	if (0 == count)
	{
		printf("排雷成功\n");
		high_DisplayBoard(mine, HIGH_ROW, HIGH_COL);
	}
}

