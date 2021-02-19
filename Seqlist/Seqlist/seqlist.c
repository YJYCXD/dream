#define _CRT_SECURE_NO_WARNINGS 1
#include "seqlist.h"

//顺序表初始化
void SeqListInit(SL* ps)
{
	assert(ps);
	//对数组空间初始化
	ps->arr = (SLDataType*)malloc(sizeof(SLDataType) * 4);//malloc返回值为void*，需要强转
	if (ps->arr == NULL)
	{
		printf("内存开辟失败\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

//检查容量
void CheckCapacity(SL* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		//realloc第一个参数是要扩容的内存块地址
		//第二个参数是扩容之后总的字节数
		ps->arr = (SLDataType*)realloc(ps->arr, sizeof(SLDataType)*ps->capacity);
		if (ps->arr == NULL)
		{
			printf("内存扩容失败\n");
			exit(-1);

		}
	}
}

//顺序表尾插
void SeqListPushBack(SL* ps, SLDataType data)
{
	assert(ps);//添加断言防止传进来的是空指针

	//如果插入的有效数据个数大于开辟的空间，就会导致越界访问
	//因此，需要检查容量
	CheckCapacity(ps);
	ps->arr[ps->size] = data;
	ps->size++;
}


//顺序表打印
void SeqListPrint(const SL* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

//顺序表尾删除
void SeqListPopBack(SL* ps)
{
	assert(ps);
	//删除并不是真正的把数据删除，只是将表面的数据不显示
	//只需要将长度减去
	ps->size--;
}


//顺序表头插入
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

//顺序表头删除
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


//顺序表查找数据
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

//顺序表中间插入删除
void SeqListInsert(SL* ps, int pos, SLDataType data)
{
	assert(ps);
	CheckCapacity(ps);//检查容量
	int end = ps->size;
	while (end >= pos)
	{
		ps->arr[end] = ps->arr[end - 1];
		end--;
	}
	ps->arr[end + 1] = data;
	ps->size++;
}

//顺序表中间删除
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


//顺序表销毁
void SeqListDestory(SL* ps)
{
	assert(ps); 
	free(ps->arr);
	free(ps);
	ps = NULL;
}