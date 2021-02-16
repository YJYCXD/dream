#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//菜单
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
		//switch选择用数字选择功能的可读性不高，可以用枚举
		switch (input)
		{
		case ADD:
			ContactAdd(&con);//传结构体的地址要比直接传结构体有效率，结构体无论多大，地址就只有4个字节
			break;
		case DEL:
			ContactDel(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ContactShow(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default :
			printf("选择错误，请重新选择\n");
			break;

		}
	} while (input);
	return 0;
}