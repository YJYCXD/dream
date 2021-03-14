#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <windows.h>

#define NAME 20
#define TELE 12
#define ADDR 30
#define WECHAT 20
#define SIZE 500

//��ö�ٳ�������switch��ѡ��������Ӵ���Ŀɶ���
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

//����һ����ϵ����Ϣ�Ľṹ��
typedef struct PeopleInfo
{
	char name[NAME];
	int age;
	char tele[TELE];
	char addr[ADDR];
	char wechat[WECHAT];
}PeopleInfo;

//����ͨѶ¼�Ľṹ�壬����������ϵ����Ϣ�͵�ǰ�Ѿ���ŵ���ϵ�˸���

////��̬�汾
//typedef struct Con
//{
//	PeopleInfo data[SIZE];
//	int size;
//}Con;

//��̬�汾
typedef struct Con
{
	PeopleInfo* data;
	int size;
	int capacity;
}Con;


//��ͨѶ¼���г�ʼ��
void ContactInit(Con* contact);

//�����ϵ��
void AddContact(Con* contact);

//��ʾ��ϵ����Ϣ
void ContactShow(const Con* contact);

//������ϵ��
int SearchContact(Con* contact);

//��ͨѶ¼��Ϣ
void ContactOpen(Con* contact, int pos);

//ѡ����ϵ��
void ContactChoice(Con* contact);

//�޸���ϵ��
void ModifyContact(Con* contact, int pos);

//ɾ����ϵ��
void DeleteContact(Con* contact, int pos);

//��ͨѶ¼����
void SortContact(Con* contact);

//����ͨѶ¼
void ContactSave(Con* contact);