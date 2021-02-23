#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NAME 20
#define SEX 5
#define TELE 12
#define ADDR 20
#define InitSpace 3

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

//����һ���ṹ�壬�����洢��ϵ����Ϣ
struct PeopleInfo
{
	char name[NAME];
	char sex[SEX];
	int age;
	char tele[TELE];
	char addr[ADDR];
};

//ͨѶ¼Ҫ������Ӻ�ɾ������ֻ��Ҫ��ϵ�˵���Ϣ������Ҫ�洢�ĸ���
typedef struct Contact
{
	struct PeopleInfo* human;
	int size;
	int capacity;
}SC;   //��typedef���ṹ�����¶�������

//ͨѶ¼��ʼ��
void ContactInit(SC* ps);

//���ͨѶ¼��ϵ��
void ContactAdd(SC* ps);

//��ʾͨѶ¼����
void ContactShow(const SC* ps);//��ʾ��������Ҫ�޸ģ������const���αȽϰ�ȫ

//ɾ��ָ����ϵ����Ϣ
void ContactDel(SC* ps);

//������ϵ����Ϣ
void ContactSearch(const SC* ps);


//�޸���ϵ����Ϣ
void ContactModify(SC* ps);

//������ϵ����Ϣ
void ContactSort(const SC* ps);

//�����������֮��Ҫ��ͨѶ¼��������
//�ͷſ��ٵĶ�̬�ڴ�
void ContactDestory(SC* ps);