#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


static int FindContact(const SC* ps,char* name)//��static��������Ϊ�������������ͨѶ¼����Ҫ����
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
	//��ͨѶ¼���ٳ�ʼ�ռ�
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
			printf("����ʧ��\n");
			return;
		}
		else
		{
			printf("���ݳɹ�\n");
			ps->human = ptr;
		}
	}
}

void ContactAdd(SC* ps)
{
	//������ϵ��֮ǰҪ�����������
	CheckCapacity(ps);
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
		printf("ɾ���ɹ�\n");
	}
}

void ContactSearch(const SC* ps)
{
	char name[NAME];
	printf("������Ҫ������ϵ�˵�����\n");
	scanf("%s", name);
	int ret = FindContact(ps,name);
	if (-1 == ret)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		printf("%-20s\t%-2s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸���ϵ�˵�����\n");
	scanf("%s", name);
	int ret = FindContact(ps, name);
	if(-1 == ret)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		printf("��������ϵ������\n");
		scanf("%s", ps->human[ret].name);
		printf("��������ϵ������\n");
		scanf("%d", &(ps->human[ret].age));//���������õ�ַ����Ϊ���䲻���ַ�����û�г�ʼ��ַ
		printf("��������ϵ�˵绰\n");
		scanf("%s", ps->human[ret].tele);
		printf("��������ϵ���Ա�\n");
		scanf("%s", ps->human[ret].sex);
		printf("��������ϵ�˵�ַ\n");
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
	//ԭ����ð������
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
		printf("��ѡ������ʽ\n");
		printf("0. ����    1. ����    2. �Ա�\n");
		scanf("%d", &input);
		if (input < 0 || input>2)
		{
			printf("�����������������\n");
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