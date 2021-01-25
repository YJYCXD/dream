#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80
#define MID_COOUNT 12
#define HIGH_COUNT 15

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROWS][COLS], int row, int col, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);

void Put_Mine(char board[ROWS][COLS], int row, int col);
void Calu_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void Sweep(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
int get_mine(char show[ROWS][COLS], int row, int col);