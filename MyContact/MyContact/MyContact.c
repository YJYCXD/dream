#define _CRT_SECURE_NO_WARNINGS 1

#include "MyContact.h"

//ͨѶ¼��ʼ��
void ContactInit(Con* contact)
{
	assert(contact);
	contact->size = 0;
	memset(contact->data, 0, sizeof(contact->data));
}

//¼����ϵ��
static InfoInput(Con* people, int pos)
{
	printf("��������ϵ������:->\n");
	scanf("%s", people->data[pos].name);
	printf("��������ϵ������:->\n");
	scanf("%d", &(people->data[pos].age));//����Ҫ�õ�ַ��age�������飬���Ҫȡ��ַ
	printf("��������ϵ�˵绰:->\n");
	scanf("%s", people->data[pos].tele);
	printf("��������ϵ��סַ:->\n");
	scanf("%s", people->data[pos].addr);
	printf("��������ϵ��΢�ź�:->\n");
	scanf("%s", people->data[pos].wechat);
}

//�����ϵ��
void AddContact(Con* contact)
{
	assert(contact);
	//���֮ǰ���������ж�
	if (contact->size == SIZE)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		//¼����Ϣ�ĺ���
		InfoInput(contact, contact->size);
		contact->size++;
	}
}


//��ʾ��ϵ��
void ContactShow(const Con* contact)
{
	assert(contact);
	if (contact->size > 0)
	{
		printf("%-20s\t%-5s\t%-12s\t%-30s\t%-20s\n", "����", "����", "�绰", "סַ", "΢�ź�");
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

//����ϵ��
void ContactOpen(Con* contact, int pos)
{
	assert(contact);
	printf("%-20s\t%-5s\t%-12s\t%-30s\t%-20s\n", "����", "����", "�绰", "סַ", "΢�ź�");
	printf("%-20s\t%-5d\t%-12s\t%-30s\t%-20s\n",
		contact->data[pos].name,
		contact->data[pos].age,
		contact->data[pos].tele,
		contact->data[pos].addr,
		contact->data[pos].wechat);
}


//������ϵ��
int SearchContact(Con* contact)
{
	assert(contact);
	char name[NAME] = { 0 };
	char wechat[WECHAT] = { 0 };
	int i = 0;
	int input = 0;
	printf("��ѡ������������΢�źŲ���\n");
	printf("**** 1. ����    2. ΢�ź�*****\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("����������:->\n");
		scanf("%s", name);
		break;
	case 2:
		printf("������΢�ź�:->\n");
		scanf("%s", wechat);
		break;
	default:
		printf("��������˳�����\n");
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
	printf("��ϵ�˲�����\n");
	return -1;
}


//ѡ����ϵ��
//����ɾ�����޸Ĳ���

void ContactChoice(Con* contact)
{
	assert(contact);
	int pos = SearchContact(contact);
	int input = 0;
	printf("******** 1. Modify    2. Delete *******\n");
	printf("������Ҫִ�еĲ���->\n");
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
		printf("������󣬷������˵�\n");
		break;
	}
}


//�޸���ϵ��
void ModifyContact(Con* contact, int pos)
{
	InfoInput(contact, pos);
}


//ɾ����ϵ��
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

//�ȽϺ���
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


//����ͨѶ¼
void SortContact(Con* contact)
{
	assert(contact);
	Myqsort(contact->data, contact->size, sizeof(contact->data[0]), compare);
}