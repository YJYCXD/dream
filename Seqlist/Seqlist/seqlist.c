#define _CRT_SECURE_NO_WARNINGS 1
#include "seqlist.h"

//˳����ʼ��
void SeqListInit(SL* ps)
{
	assert(ps);
	//������ռ��ʼ��
	ps->arr = (SLDataType*)malloc(sizeof(SLDataType) * 4);//malloc����ֵΪvoid*����Ҫǿת
	if (ps->arr == NULL)
	{
		printf("�ڴ濪��ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

//�������
void CheckCapacity(SL* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		//realloc��һ��������Ҫ���ݵ��ڴ���ַ
		//�ڶ�������������֮���ܵ��ֽ���
		ps->arr = (SLDataType*)realloc(ps->arr, sizeof(SLDataType)*ps->capacity);
		if (ps->arr == NULL)
		{
			printf("�ڴ�����ʧ��\n");
			exit(-1);

		}
	}
}

//˳���β��
void SeqListPushBack(SL* ps, SLDataType data)
{
	assert(ps);//��Ӷ��Է�ֹ���������ǿ�ָ��

	//����������Ч���ݸ������ڿ��ٵĿռ䣬�ͻᵼ��Խ�����
	//��ˣ���Ҫ�������
	CheckCapacity(ps);
	ps->arr[ps->size] = data;
	ps->size++;
}


//˳����ӡ
void SeqListPrint(const SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

//˳���βɾ��
void SeqListPopBack(SL* ps)
{
	assert(ps);
	//ɾ�������������İ�����ɾ����ֻ�ǽ���������ݲ���ʾ
	//ֻ��Ҫ�����ȼ�ȥ
	ps->size--;
}


//˳���ͷ����
void SeqListPushFront(SL* ps, SLDataType data)
{
	assert(ps);

	CheckCapacity(ps);
	int end = ps->size;
	while (end >= 0)
	{
		ps->arr[end] = ps->arr[end - 1];
		end--;
	}
	ps->arr[end + 1] = data;
	ps->size++;
}

//˳���ͷɾ��
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int start = 0;
	while (start < ps->size)
	{
		ps->arr[start] = ps->arr[start + 1];
		start++;
	}
	ps->size--;
}


//˳����������
int SeqListFindData(SL* ps, SLDataType data)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == data)
			return i;
	}
	return -1;
}

//˳����м����ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType data)
{
	assert(ps);
	CheckCapacity(ps);//�������
	int end = ps->size;
	while (end >= pos)
	{
		ps->arr[end] = ps->arr[end - 1];
		end--;
	}
	ps->arr[end + 1] = data;
	ps->size++;
}

//˳����м�ɾ��
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	int start = pos;
	while (start < ps->size-1)
	{
		ps->arr[start] = ps->arr[start + 1];
		start++;

	}
	ps->size--;
}


//˳�������
void SeqListDestory(SL* ps)
{
	assert(ps); 
	free(ps->arr);
	free(ps);
	ps = NULL;
}