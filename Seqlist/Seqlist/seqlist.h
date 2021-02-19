//˳���Ķ�̬�洢
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;//����ֱ���޸����������

typedef struct SeqList
{
	SLDataType* arr; //ָ��̬���ٵ�����
	int size;//��Ч���ݵĸ���
	int capacity;//����
}SL;


//˳����ʼ��
void SeqListInit(SL* ps);

//˳���β����
void SeqListPushBack(SL* ps, SLDataType data);

//˳����ӡ
void SeqListPrint(const SL* ps);

//��������Ƿ���,������˾�����
void CheckCapacity(SL* ps);


//˳���βɾ��
void SeqListPopBack(SL* ps);


//˳���ͷ����
void SeqListPushFront(SL* ps, SLDataType data);

//˳���ͷɾ��
void SeqListPopFront(SL* ps);

//˳����������
int SeqListFindData(SL* ps, SLDataType data);

//˳����м����
void SeqListInsert(SL* ps, int pos, SLDataType data);

//˳����м�ɾ��
void SeqListErase(SL* ps, int pos);

//˳�������
void SeqListDestory(SL* ps);
