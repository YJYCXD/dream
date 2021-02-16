#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


static int FindContact(SC* ps,char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->human[i].name, name) == 0)
			return i;
	}

	return -1;
}


void ContactInit(struct Contact* ps)
{
	ps->size = 0;
	//用memset将human所有元素初始化为0
	memset(ps->human, 0, sizeof(ps->human));
}


void ContactAdd(SC* ps)
{
	printf("请输入联系人姓名\n");
	scanf("%s", ps->human[ps->size].name);
	printf("请输入联系人年龄\n");
	scanf("%d", &(ps->human[ps->size].age));//输入年龄用地址是因为年龄不是字符串，没有初始地址
	printf("请输入联系人电话\n");
	scanf("%s", ps->human[ps->size].tele);
	printf("请输入联系人性别\n");
	scanf("%s", ps->human[ps->size].sex);
	printf("请输入联系人地址\n");
	scanf("%s", ps->human[ps->size].addr);

	ps->size++;//每增加一个联系人长度加一
}



void ContactShow(const SC* ps)//显示函数不需要修改，因此用const修饰比较安全
{
	int i = 0;
	printf("%-20s\t%-2s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < ps->size; i++)
	{
		printf("%-20s\t", ps->human[i].name);
		printf("%-2d\t", ps->human[i].age);
		printf("%-5s\t", ps->human[i].sex);
		printf("%-12s\t", ps->human[i].tele);
		printf("%-20s\n", ps->human[i].addr);
	}
}


void ContactDel(SC* ps)
{
	char name[NAME];
	int end = ps->size - 1;
	printf("请输入要删除联系人的姓名\n");
	scanf("%s", name);
	//要删除联系人要先找到联系人位置
	int ret = FindContact(ps, name);
	if (-1 == ret)
	{
		printf("联系人不存在\n");
	}
	else
	{
		int i = 0;
		//删除联系人也就是用后面的数据将删除位置的数据覆盖
		for (i = ret; i < ps->size - 1; i++)
		{
			ps->human[i] = ps->human[i + 1];
		}
		ps->size--;
	}
}