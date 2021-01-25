#define LOW_ROW 6
#define LOW_COL 6
#define LOW_ROWS LOW_ROW+2
#define LOW_COLS LOW_COL+2
#define EASY_COUNT 4


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void low_InitBoard(char board[LOW_ROWS][LOW_COLS], int row, int col, char set);
void low_DisplayBoard(char board[LOW_ROWS][LOW_COLS], int row, int col);

void low_Put_Mine(char board[LOW_ROWS][LOW_COLS], int row, int col);
void low_Sweep(char mine[LOW_ROWS][LOW_COLS], char show[LOW_ROWS][LOW_COLS], int x, int y);
void low_Calu_Mine(char mine[LOW_ROWS][LOW_COLS], char show[LOW_ROWS][LOW_COLS], int row, int col);
int low_get_mine(char show[LOW_ROWS][LOW_COLS], int row, int col);