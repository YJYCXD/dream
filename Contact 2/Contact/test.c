#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//�˵�
void menu()
{
	printf("*****************************************\n");
	printf("****** 1. add           2. del     ******\n");
	printf("****** 3. search        4. modify  ******\n");
	printf("****** 5. show          6. sort    ******\n");
	printf("****** 0. exit                     ******\n");
	printf("*****************************************\n");

}

int main()
{
	int input = 0; 
	SC con;
	ContactInit(&con);
	do
	{
		menu();
		scanf("%d", &input);
		//switchѡ��������ѡ���ܵĿɶ��Բ��ߣ�������ö��
		switch (input)
		{
		case ADD:
			ContactAdd(&con);//���ṹ��ĵ�ַҪ��ֱ�Ӵ��ṹ����Ч�ʣ��ṹ�����۶�󣬵�ַ��ֻ��4���ֽ�
			break;
		case DEL:
			ContactDel(&con);
			break;
		case SEARCH:
			ContactSearch(&con);
			break;
		case MODIFY:
			ContactModify(&con);
			break;
		case SHOW:
			ContactShow(&con);
			break;
		case SORT:
			ContactSort(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default :
			printf("ѡ�����������ѡ��\n");
			break;

		}
	} while (input);
	return 0;
}