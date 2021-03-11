#define _CRT_SECURE_NO_WARNINGS 1

#include "MyContact.h"

//通讯录初始化
void ContactInit(Con* contact)
{
	assert(contact);
	contact->size = 0;
	memset(contact->data, 0, sizeof(contact->data));
}

//录入联系人
static InfoInput(Con* people, int pos)
{
	printf("请输入联系人姓名:->\n");
	scanf("%s", people->data[pos].name);
	printf("请输入联系人年龄:->\n");
	scanf("%d", &(people->data[pos].age));//输入要用地址，age不是数组，因此要取地址
	printf("请输入联系人电话:->\n");
	scanf("%s", people->data[pos].tele);
	printf("请输入联系人住址:->\n");
	scanf("%s", people->data[pos].addr);
	printf("请输入联系人微信号:->\n");
	scanf("%s", people->data[pos].wechat);
}

//添加联系人
void AddContact(Con* contact)
{
	assert(contact);
	//添加之前进行容量判断
	if (contact->size == SIZE)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		//录入信息的函数
		InfoInput(contact, contact->size);
		contact->size++;
	}
}


//显示联系人
void ContactShow(const Con* contact)
{
	assert(contact);
	if (contact->size > 0)
	{
		printf("%-20s\t%-5s\t%-12s\t%-30s\t%-20s\n", "姓名", "年龄", "电话", "住址", "微信号");
		int i = 0;
		for (i = 0; i < contact->size; i++)
		{
			printf("%-20s\t%-5d\t%-12s\t%-30s\t%-20s\n",
				contact->data[i].name,
				contact->data[i].age,
				contact->data[i].tele,
				contact->data[i].addr,
				contact->data[i].wechat);
		}
	}
}

//打开联系人
void ContactOpen(Con* contact, int pos)
{
	assert(contact);
	printf("%-20s\t%-5s\t%-12s\t%-30s\t%-20s\n", "姓名", "年龄", "电话", "住址", "微信号");
	printf("%-20s\t%-5d\t%-12s\t%-30s\t%-20s\n",
		contact->data[pos].name,
		contact->data[pos].age,
		contact->data[pos].tele,
		contact->data[pos].addr,
		contact->data[pos].wechat);
}


//搜索联系人
int SearchContact(Con* contact)
{
	assert(contact);
	char name[NAME] = { 0 };
	char wechat[WECHAT] = { 0 };
	int i = 0;
	int input = 0;
	printf("请选择用姓名或者微信号查找\n");
	printf("**** 1. 姓名    2. 微信号*****\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("请输入姓名:->\n");
		scanf("%s", name);
		break;
	case 2:
		printf("请输入微信号:->\n");
		scanf("%s", wechat);
		break;
	default:
		printf("输入错误，退出查找\n");
		break;

	}
	for (i = 0; i < contact->size; i++)
	{
		if (strcmp(contact->data[i].name, name) == 0 || strcmp(contact->data[i].wechat, wechat) == 0)
		{
			ContactOpen(contact, i);
			Sleep(5000);
			return i;
		}
	}
	printf("联系人不存在\n");
	return -1;
}


//选择联系人
//包括删除和修改操作

void ContactChoice(Con* contact)
{
	assert(contact);
	int pos = SearchContact(contact);
	int input = 0;
	printf("******** 1. Modify    2. Delete *******\n");
	printf("请输入要执行的操作->\n");
	scanf("%d", &input);
	switch (input)
	{
	case MODIFY:
		ModifyContact(contact, pos);
		break;
	case DEL:
		DeleteContact(contact, pos);
		break;
	default:
		printf("输入错误，返回主菜单\n");
		break;
	}
}


//修改联系人
void ModifyContact(Con* contact, int pos)
{
	InfoInput(contact, pos);
}


//删除联系人
void DeleteContact(Con* contact, int pos)
{
	assert(contact);
	int i = 0;
	for (i = pos; i <= contact->size - 2; i++)
	{
		contact->data[i] = contact->data[i + 1];
	}
	contact->size--;
}

//比较函数
static int compare(const void* e1, const void* e2)
{
	return strcmp(((PeopleInfo*)e1)->name, ((PeopleInfo*)e2)->name);
}

static void Swap(void* buf1, void* buf2, size_t width)
{
	assert(buf1 && buf2);
	size_t i = 0;
	for (i = 0; i < width; i++)
	{
		int t = *((char*)buf1 + i);
		*((char*)buf1 + i) = *((char*)buf2 + i);
		*((char*)buf2 + i) = t;
	}
}

static void Myqsort(void* base, size_t num, size_t width, int(*compare)(const void* e1, const void* e2))
{
	assert(base);
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < num - i - 1; j++)
		{
			if (compare((char*)base + j*width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j*width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


//排序通讯录
void SortContact(Con* contact)
{
	assert(contact);
	Myqsort(contact->data, contact->size, sizeof(contact->data[0]), compare);
}