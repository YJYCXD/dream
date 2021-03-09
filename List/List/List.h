#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//定义数据类型
typedef int LDataType;

//定义双向结构体
typedef struct ListNode
{
	int data;
	struct ListNode* pre;
	struct ListNode* next;
}ListNode;

//初始化头节点
void ListInit1(ListNode** pphead);//传二级指针，直接在phead上分配空间
ListNode* ListInit2(ListNode* phead);//将分配的空间返回，作为头节点

//创建新的节点
ListNode* BuyNewnode(LDataType x);

//尾插
void ListPushBack(ListNode* phead, LDataType data);

//尾删
void ListPopBack(ListNode* phead);

//头插
void ListPushFront(ListNode* phead, LDataType data);

//头删
void ListPopFront(ListNode* phead);

//查找节点
ListNode* ListFind(ListNode* phead, LDataType x);

//中间插入
void ListInsert(ListNode* pos, LDataType data);

//中间删除
void ListErase(ListNode* pos);

//利用中间插入实现头尾插入删除
void ListPushBack1(ListNode* phead, LDataType data);
void ListPopBack1(ListNode* phead);
void ListPushFront1(ListNode* phead, LDataType data);
void ListPopFront1(ListNode* phead);

//打印双向链表
void Listprint(ListNode* phead);

//销毁双向链表
//1、不销毁头节点
void ListClear(ListNode* phead);
//2、销毁整个链表，包括头节点
void ListDestory(ListNode* phead);