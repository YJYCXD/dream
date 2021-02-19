//顺序表的动态存储
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;//可以直接修改数组的类型

typedef struct SeqList
{
	SLDataType* arr; //指向动态开辟的数组
	int size;//有效数据的个数
	int capacity;//容量
}SL;


//顺序表初始化
void SeqListInit(SL* ps);

//顺序表尾插入
void SeqListPushBack(SL* ps, SLDataType data);

//顺序表打印
void SeqListPrint(const SL* ps);

//检查容量是否够用,如果满了就增容
void CheckCapacity(SL* ps);


//顺序表尾删除
void SeqListPopBack(SL* ps);


//顺序表头插入
void SeqListPushFront(SL* ps, SLDataType data);

//顺序表头删除
void SeqListPopFront(SL* ps);

//顺序表查找数据
int SeqListFindData(SL* ps, SLDataType data);

//顺序表中间插入
void SeqListInsert(SL* ps, int pos, SLDataType data);

//顺序表中间删除
void SeqListErase(SL* ps, int pos);

//顺序表销毁
void SeqListDestory(SL* ps);
