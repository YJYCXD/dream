#define _CRT_SECURE_NO_WARNINGS 1
#include "MyContact.h"

Con contact;

void menu()
{
	printf("*****************通讯录*****************\n");
	printf("************* 共%d位联系人 **************\n\n", contact.size);
	printf("******* 1. ADD         2. search *******\n\n");
	printf("******* 3. choice      4. sort   *******\n\n");
	printf("*******         0. exit          *******\n\n");
	printf("*****************通讯录*****************\n");

}

//ADD函数里另外封装一个函数，用来录入信息，并且再用一个函数来检查姓名、电话不能为空，为空则提醒输入
//SEARCH函数中放入修改，删除联系人的函数
//显示函数不单独作为选择的函数，而是每次在菜单下面显示
int main()
{
	int input = 0;

	//对通讯录初始化
	ContactInit(&contact);
	do
	{
		menu();
		ContactShow(&contact);
		printf("请输入您要执行的操作:->\n");
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
			printf("保存成功，拜拜\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}