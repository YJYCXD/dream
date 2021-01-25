#define _CRT_SECURE_NO_WARNINGS 1

#include "lowgame.h"
#include "middlegame.h"
#include "highgame.h"

//�˵�����
void menu()
{
	printf("**********************************\n");
	printf("**********    1. play    *********\n");
	printf("**********    0. exit    *********\n");
	printf("**********************************\n");
}

//��Ϸ����
//void game()
//{
//	//�����������飺һ���������������ף�һ����������չʾ���׵���Ϣ
//	char mine[ROWS][COLS];
//	char show[ROWS][COLS];
//
//	//�Ƚ����������ʼ��,�����׵������ʼ��Ϊ�ַ�'0'
//	//չʾ������Ϣ�������ʼ��Ϊ'*'
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//	//��ӡ��������
//	//DisplayBoard(mine, ROW, COL);
//	DisplayBoard(show, ROW, COL);
//
//	//���׽��в���
//	Put_Mine(mine, ROW, COL);
//	DisplayBoard(mine, ROW, COL);
//
//	//���׺���
//	Calu_Mine(mine, show, ROW, COL);
//
//}

void low_game()
{
	//�����������飺һ���������������ף�һ����������չʾ���׵���Ϣ
	char mine1[LOW_ROWS][LOW_COLS];
	char show1[LOW_ROWS][LOW_COLS];

	//�Ƚ����������ʼ��,�����׵������ʼ��Ϊ�ַ�'0'
	//չʾ������Ϣ�������ʼ��Ϊ'*'
	low_InitBoard(mine1, LOW_ROWS, LOW_COLS, '0');
	low_InitBoard(show1, LOW_ROWS, LOW_COLS, '*');
	//��ӡ��������
	//DisplayBoard(mine, ROW, COL);
	low_DisplayBoard(show1, LOW_ROW, LOW_COL);

	//���׽��в���
	low_Put_Mine(mine1, LOW_ROW, LOW_COL);
	low_DisplayBoard(mine1, LOW_ROW, LOW_COL);

	//���׺���
	low_Calu_Mine(mine1, show1, LOW_ROW, LOW_COL);

}

void middle_game()
{
	//�����������飺һ���������������ף�һ����������չʾ���׵���Ϣ
	char mine2[MIDDLE_ROWS][MIDDLE_COLS];
	char show2[MIDDLE_ROWS][MIDDLE_COLS];

	//�Ƚ����������ʼ��,�����׵������ʼ��Ϊ�ַ�'0'
	//չʾ������Ϣ�������ʼ��Ϊ'*'
	middle_InitBoard(mine2, MIDDLE_ROWS, MIDDLE_COLS, '0');
	middle_InitBoard(show2, MIDDLE_ROWS, MIDDLE_COLS, '*');
	//��ӡ��������
	//DisplayBoard(mine, ROW, COL);
	middle_DisplayBoard(show2, MIDDLE_ROW, MIDDLE_COL);

	//���׽��в���
	middle_Put_Mine(mine2, MIDDLE_ROW, MIDDLE_COL);
	middle_DisplayBoard(mine2, MIDDLE_ROW, MIDDLE_COL);

	//���׺���
	middle_Calu_Mine(mine2, show2, MIDDLE_ROW, MIDDLE_COL);
}

void high_game()
{
	//�����������飺һ���������������ף�һ����������չʾ���׵���Ϣ
	char mine3[HIGH_ROWS][HIGH_COLS];
	char show3[HIGH_ROWS][HIGH_COLS];

	//�Ƚ����������ʼ��,�����׵������ʼ��Ϊ�ַ�'0'
	//չʾ������Ϣ�������ʼ��Ϊ'*'
	high_InitBoard(mine3, HIGH_ROWS, HIGH_COLS, '0');
	high_InitBoard(show3, HIGH_ROWS, HIGH_COLS, '*');
	//��ӡ��������
	//DisplayBoard(mine, ROW, COL);
	high_DisplayBoard(show3, HIGH_ROW, HIGH_COL);

	//���׽��в���
	high_Put_Mine(mine3, HIGH_ROW, HIGH_COL);
	high_DisplayBoard(mine3, HIGH_ROW, HIGH_COL);

	//���׺���
	high_Calu_Mine(mine3, show3, HIGH_ROW, HIGH_COL);
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
		getchar();
		switch (input)
		{
		case 1:
		{
			char n = 0;
			printf("��ѡ���Ѷ�:>\n");
			printf("l����ͼ���m�����м���h����߼�\n");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);

	return 0;

}