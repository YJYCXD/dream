#define HIGH_ROW 18
#define HIGH_COL 18
#define HIGH_ROWS HIGH_ROW+2
#define HIGH_COLS HIGH_COL+2
#define HIGH_COUNT 15

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void high_InitBoard(char board[HIGH_ROWS][HIGH_COLS], int row, int col, char set);
void high_DisplayBoard(char board[HIGH_ROWS][HIGH_COLS], int row, int col);
void high_Put_Mine(char board[HIGH_ROWS][HIGH_COLS], int row, int col);
void high_Sweep(char mine[HIGH_ROWS][HIGH_COLS], char show[HIGH_ROWS][HIGH_COLS], int x, int y);
void high_Calu_Mine(char mine[HIGH_ROWS][HIGH_COLS], char show[HIGH_ROWS][HIGH_COLS], int row, int col);
int high_get_mine(char show[HIGH_ROWS][HIGH_COLS], int row, int col);