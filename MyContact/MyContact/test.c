#define _CRT_SECURE_NO_WARNINGS 1
#include "MyContact.h"

Con contact;

void menu()
{
	printf("*****************ͨѶ¼*****************\n");
	printf("************* ��%dλ��ϵ�� **************\n\n", contact.size);
	printf("******* 1. ADD         2. search *******\n\n");
	printf("******* 3. choice      4. sort   *******\n\n");
	printf("*******         0. exit          *******\n\n");
	printf("*****************ͨѶ¼*****************\n");

}

//ADD�����������װһ������������¼����Ϣ����������һ������������������绰����Ϊ�գ�Ϊ������������
//SEARCH�����з����޸ģ�ɾ����ϵ�˵ĺ���
//��ʾ������������Ϊѡ��ĺ���������ÿ���ڲ˵�������ʾ
int main()
{
	int input = 0;

	//��ͨѶ¼��ʼ��
	ContactInit(&contact);
	do
	{
		menu();
		ContactShow(&contact);
		printf("��������Ҫִ�еĲ���:->\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&contact);
			break;
		case SEARCH:
			SearchContact(&contact);
			break;
		case CHOICE:
			ContactChoice(&contact);
			break;
		case SORT:
			SortContact(&contact);
			break;
		case EXIT:
			ContactSave(&contact);
			printf("����ɹ����ݰ�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}