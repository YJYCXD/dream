#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()  
{
	printf("****************************************\n");
	printf("*********1.play      0.return **********\n");
	printf("****************************************\n");

	//�û����벢ִ��
	

}
//������Ϸ�Ĺ���
void game()
{
	int ret = 0;
	//����-����������Ϣ
	char board[ROW][COL] = { 0 };//��������
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		//CΪ��������
		if (ret != 'C')
		{
			break;
		}

		//�������C������Ϸ�Ѿ��н��������ѭ��
		//������ֵ��Ϊ*��#��Ϊ�˿��Լ򻯳���ֻ��Ҫ������ȵ�ʱ��ĳ��Ԫ�ؾͿ���֪��˭Ӯ��
		
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}

void test()
{
	int x = 0;

	printf("��������Ҫ���еĲ�����");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (x);
}
int main()
{
	srand((unsigned int)time(NULL));//��ʱ��������������
	test();
	return 0;
}