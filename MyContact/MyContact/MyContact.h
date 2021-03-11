#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <windows.h>

#define NAME 20
#define TELE 12
#define ADDR 30
#define WECHAT 20
#define SIZE 500

//用枚举常量定义switch的选项，可以增加代码的可读性
enum Contact
{
	EXIT,
	ADD,
	SEARCH,
	CHOICE,
	SORT
};

enum Search
{
	NAME_SEARCH = 1,
	WECHAT_SEARCH
};

enum Choice
{
	MODIFY = 1,
	DEL
};

//定义一个联系人信息的结构体
typedef struct PeopleInfo
{
	char name[NAME];
	int age;
	char tele[TELE];
	char addr[ADDR];
	char wechat[WECHAT];
}PeopleInfo;

//定义通讯录的结构体，用来保存联系人信息和当前已经存放的联系人个数
typedef struct Con
{
	PeopleInfo data[SIZE];
	int size;
}Con;

//对通讯录进行初始化
void ContactInit(Con* contact);

//添加联系人
void AddContact(Con* contact);

//显示联系人信息
void ContactShow(const Con* contact);

//查找联系人
int SearchContact(Con* contact);

//打开通讯录信息
void ContactOpen(Con* contact, int pos);

//选择联系人
void ContactChoice(Con* contact);

//修改联系人
void ModifyContact(Con* contact, int pos);

//删除联系人
void DeleteContact(Con* contact, int pos);

//对通讯录排序
void SortContact(Con* contact);