#define MIDDLE_ROW 12
#define MIDDLE_COL 12
#define MIDDLE_ROWS MIDDLE_ROW+2
#define MIDDLE_COLS MIDDLE_COL+2
#define MID_COUNT 8


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void middle_InitBoard(char board[MIDDLE_ROWS][MIDDLE_COLS], int row, int col, char set);
void middle_DisplayBoard(char board[MIDDLE_ROWS][MIDDLE_COLS], int row, int col);

void middle_Put_Mine(char board[MIDDLE_ROWS][MIDDLE_COLS], int row, int col);
void middle_Sweep(char mine[MIDDLE_ROWS][MIDDLE_COLS], char show[MIDDLE_ROWS][MIDDLE_COLS], int x, int y);
void middle_Calu_Mine(char mine[MIDDLE_ROWS][MIDDLE_COLS], char show[MIDDLE_ROWS][MIDDLE_COLS], int row, int col);
int middle_get_mine(char show[MIDDLE_ROWS][MIDDLE_COLS], int row, int col);