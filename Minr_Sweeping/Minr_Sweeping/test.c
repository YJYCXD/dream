#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//�˵�����
void menu()
{
	printf("**********************************\n");
	printf("**********    1. play    *********\n");
	printf("**********    0. exit    *********\n");
	printf("**********************************\n");
}
//��Ϸ����
void game()
{
	//�����������飺һ���������������ף�һ����������չʾ���׵���Ϣ
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//�Ƚ����������ʼ��,�����׵������ʼ��Ϊ�ַ�'0'
	//չʾ������Ϣ�������ʼ��Ϊ'*'
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ��������
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//���׽��в���
	Put_Mine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//���׺���
	Calu_Mine(mine, show, ROW, COL);
	
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	
	do
	{
		menu();
		printf("������ѡ�>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("�������������ѡ��\n");
			break;
		}
		
	} while (input);
	
	return 0;

}