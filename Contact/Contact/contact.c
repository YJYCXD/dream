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
	//��memset��human����Ԫ�س�ʼ��Ϊ0
	memset(ps->human, 0, sizeof(ps->human));
}


void ContactAdd(SC* ps)
{
	printf("��������ϵ������\n");
	scanf("%s", ps->human[ps->size].name);
	printf("��������ϵ������\n");
	scanf("%d", &(ps->human[ps->size].age));//���������õ�ַ����Ϊ���䲻���ַ�����û�г�ʼ��ַ
	printf("��������ϵ�˵绰\n");
	scanf("%s", ps->human[ps->size].tele);
	printf("��������ϵ���Ա�\n");
	scanf("%s", ps->human[ps->size].sex);
	printf("��������ϵ�˵�ַ\n");
	scanf("%s", ps->human[ps->size].addr);

	ps->size++;//ÿ����һ����ϵ�˳��ȼ�һ
}



void ContactShow(const SC* ps)//��ʾ��������Ҫ�޸ģ������const���αȽϰ�ȫ
{
	int i = 0;
	printf("%-20s\t%-2s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ����ϵ�˵�����\n");
	scanf("%s", name);
	//Ҫɾ����ϵ��Ҫ���ҵ���ϵ��λ��
	int ret = FindContact(ps, name);
	if (-1 == ret)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		int i = 0;
		//ɾ����ϵ��Ҳ�����ú�������ݽ�ɾ��λ�õ����ݸ���
		for (i = ret; i < ps->size - 1; i++)
		{
			ps->human[i] = ps->human[i + 1];
		}
		ps->size--;
	}
}