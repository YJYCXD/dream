#include <stdio.h>
#include <string.h>
#define NAME 20
#define SEX 5
#define TELE 12
#define ADDR 20

enum 
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

//创建一个结构体，用来存储联系人信息
struct PeopleInfo
{
	char name[NAME];
	char sex[SEX];
	int age;
	char tele[TELE];
	char addr[ADDR];
};

//通讯录要进行添加和删除，不只需要联系人的信息，还需要存储的个数
typedef struct Contact
{
	struct PeopleInfo human[1000];
	int size;
}SC;   //用typedef将结构体重新定义类型

//通讯录初始化
void ContactInit(SC* ps);

//添加通讯录联系人
void ContactAdd(SC* ps);

//显示通讯录内容
void ContactShow(const SC* ps);//显示函数不需要修改，因此用const修饰比较安全

//删除指定联系人信息
void ContactDel(SC* ps);