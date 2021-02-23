#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


static int FindContact(const SC* ps,char* name)//用static修饰是因为这个函数本身不是通讯录的主要函数
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
	//对通讯录开辟初始空间
	ps->human = (struct PeopleInfo*)malloc(sizeof(struct PeopleInfo)*InitSpace);
	ps->size = 0;
	ps->capacity=3;
}

static void CheckCapacity(SC* ps)
{
	if (ps->size == ps->capacity)
	{
		ps->capacity += 2;
		struct PeopleInfo* ptr = (struct PeopleInfo*)realloc(ps->human, sizeof(struct PeopleInfo)*ps->capacity);
		if (ptr == NULL)
		{
			printf("增容失败\n");
			return;
		}
		else
		{
			printf("增容成功\n");
			ps->human = ptr;
		}
	}
}

void ContactAdd(SC* ps)
{
	//增加联系人之前要进行容量检查
	CheckCapacity(ps);
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
		printf("删除成功\n");
	}
}

void ContactSearch(const SC* ps)
{
	char name[NAME];
	printf("请输入要查找联系人的姓名\n");
	scanf("%s", name);
	int ret = FindContact(ps,name);
	if (-1 == ret)
	{
		printf("联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-2s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t", ps->human[ret].name);
		printf("%-2d\t", ps->human[ret].age);
		printf("%-5s\t", ps->human[ret].sex);
		printf("%-12s\t", ps->human[ret].tele);
		printf("%-20s\n", ps->human[ret].addr);
	}
}


void ContactModify(SC* ps)
{
	char name[NAME];
	printf("请输入要修改联系人的姓名\n");
	scanf("%s", name);
	int ret = FindContact(ps, name);
	if(-1 == ret)
	{
		printf("联系人不存在\n");
	}
	else
	{
		printf("请输入联系人姓名\n");
		scanf("%s", ps->human[ret].name);
		printf("请输入联系人年龄\n");
		scanf("%d", &(ps->human[ret].age));//输入年龄用地址是因为年龄不是字符串，没有初始地址
		printf("请输入联系人电话\n");
		scanf("%s", ps->human[ret].tele);
		printf("请输入联系人性别\n");
		scanf("%s", ps->human[ret].sex);
		printf("请输入联系人地址\n");
		scanf("%s", ps->human[ret].addr);
	}
}

int sort_name(const void* buf1, const void* buf2)
{
	return strcmp(((SC*)buf1)->human->name, ((SC*)buf2)->human->name);
}

int sort_age(const void* buf1, const void* buf2)
{
	return ((SC*)buf1)->human->age - ((SC*)buf2)->human->age;
}

int sort_sex(const void* buf1, const void* buf2)
{
	return strcmp(((SC*)buf1)->human->sex, ((SC*)buf2)->human->sex);
}

void Swap(char* byte1, char* byte2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char t = *byte1;
		*byte1 = *byte2;
		*byte2 = t;
		byte1++;
		byte2++;
	}
}

void myqsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	//原理还是冒泡排序
	size_t i = 0;
	for (i = 0; i < num-1; i++)
	{
		size_t j = 0;
		for (j = 0; j < num - i - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
		}
		
}

void ContactSort(const SC* ps)
{
	
	int input = 1;
	int(*mySort[3])(const void* buf1, const void* buf2) = { sort_name, sort_age, sort_sex };
	while (input)
	{
		printf("请选择排序方式\n");
		printf("0. 姓名    1. 年龄    2. 性别\n");
		scanf("%d", &input);
		if (input < 0 || input>2)
		{
			printf("输入错误，请重新输入\n");
		}
		else
		{
			if (1 == input)
			{
				myqsort(ps->human, ps->size, sizeof(ps->human[0]), mySort[input]);
				break;
			}
			else
			{
				myqsort(ps->human, ps->size, sizeof(ps->human[0]), mySort[input]);
				break;
			}
		}
	}
}

void ContactDestory(SC* ps)
{
	free(ps->human);
	ps->human = NULL;

}