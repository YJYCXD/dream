#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********1.   play   ***********\n");
//	printf("**********0.   exit   ***********\n");
//}
//
//void game()
//{
//	int n = ((rand())%100)+1;
//	int a = 0;
//	
//	while (1)
//	{
//		printf("�����룺>");
//		scanf("%d", &a);
//		if (a > n)
//		{
//			printf("����\n");
//
//		}
//		else if (a < n)
//		{
//			printf("С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//	//printf("%d\n", n);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	//��������Ϸ����Ҫִ��һ�Σ������do-whileѭ��
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	system("shutdown -s -t 60");
	printf("���Խ���1�����ڹػ���������룺��������ȡ���ػ�!\n������:>");
	
	
again:
	char input[10] = { 0 };
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}