#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;

//int chkPalindrome(ListNode* A) {
//	// write code here
//	if (A == NULL || A->next == NULL)
//		return 0;
//	ListNode* fast = A;
//	ListNode* slow = A;
//	ListNode* head = NULL;
//	while (fast)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	ListNode* next = NULL;
//	while (slow)
//	{
//		next = slow->next;
//		if (head == NULL)
//		{
//			head = slow;
//			head->next = NULL;
//		}
//		else
//		{
//			slow->next = head;
//			head = slow;
//		}
//		slow = next;
//	}
//	ListNode* ptr = head;
//	while (ptr)
//	{
//		if (ptr->val != A->val)
//			break;
//		ptr = ptr->next;
//		A = A->next;
//	}
//	if (ptr == NULL)
//		return 1;
//
//	return 0;
//}

//判断回文链表
//
//bool chkPalindrome(ListNode* A) {
//		// write code here
//		if (A == NULL)
//			return false;
//		if (A->next == NULL)
//			return true;
//		ListNode* fast = A;
//		ListNode* slow = A;
//		ListNode* head = NULL;
//		while (fast && fast->next)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//		}
//		ListNode* next = NULL;
//		while (slow)
//		{
//			next = slow->next;
//			if (head == NULL)
//			{
//				head = slow;
//				head->next = NULL;
//			}
//			else
//			{
//				slow->next = head;
//				head = slow;
//			}
//			slow = next;
//		}
//		ListNode* ptr = head;
//		while (ptr)
//		{
//			if (ptr->val != A->val)
//				return false;
//
//			ptr = ptr->next;
//			A = A->next;
//		}
//		return true;
//
//}

//找公共节点
//struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
//	int countA = 0;
//	int countB = 0;
//	struct ListNode* ptrA = headA;
//	struct ListNode* ptrB = headB;
//	struct ListNode* node = NULL;
//	if (headA == NULL || headB == NULL)
//		return NULL;
//	if (headA == headB)
//		return headB;
//	//先计算A链表的长度
//	while (ptrA)
//	{
//		ptrA = ptrA->next;
//		countA++;
//	}
//	//计算B链表的长度
//	while (ptrB)
//	{
//		ptrB = ptrB->next;
//		countB++;
//	}
//	ptrA = headA;
//	ptrB = headB;
//	if (countA > countB)
//	{
//		int count = countA - countB;
//		while (count--)
//		{
//			ptrA = ptrA->next;
//		}
//	}
//	else
//	{
//		int count = countB - countA;
//		while (count--)
//		{
//			ptrB = ptrB->next;
//		}
//	}
//	while (ptrA->next != ptrB->next)
//	{
//		ptrA = ptrA->next;
//		ptrB = ptrB->next;
//		if (ptrA == NULL || ptrB == NULL)
//			return NULL;
//	}
//	if (ptrA == ptrB)
//		return ptrA;
//	node = ptrA->next;
//	return node;
//}

//判断公共节点双指针法

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
//	if (headA == NULL || headB == NULL)
//		return NULL;
//	struct ListNode* ptrA = headA;
//	struct ListNode* ptrB = headB;
//	while (ptrA != ptrB)
//	{
//		if (ptrA == NULL)
//			ptrA = headB;
//		else if (ptrB == NULL)
//			ptrB = headA;
//		if (ptrA == ptrB && ptrB != NULL)
//			break;
//		ptrA = ptrA->next;
//		ptrB = ptrB->next;
//
//		if (ptrA == NULL && ptrB == NULL)
//			return NULL;
//	}
//	return ptrA;
//
//}
//


//分割链表


//ListNode* partition(ListNode* pHead, int x) {
//	// write code here
//	if (pHead == NULL || pHead->next == NULL)
//		return pHead;
//	ListNode* max = pHead;
//	ListNode* min = pHead;
//	ListNode* premin = pHead;
//	ListNode* pre = NULL;
//	ListNode* head = NULL;
//	while (min)
//	{
//		if (min->val < x)
//		{
//			if (max->val < x)
//			{
//				if (head == NULL)
//					head = max;
//				pre = min;
//				max = max->next;
//				min = min->next;
//			}
//			else
//			{
//				premin->next = min->next;
//				min->next = max;
//				if (pre == NULL)
//				{
//					head = min;
//				}
//				else
//				{
//					pre->next = min;
//				}
//				pre = min;
//				min = premin->next;
//			}
//		}
//		else
//		{
//			premin = min;
//			min = min->next;
//		}
//	}
//	if (head)
//		return head;
//	else
//		return pHead;
//}


//分割链表(定义两个新链表)
ListNode* partition(ListNode* pHead, int x) {
	// write code here
	if (pHead == NULL || pHead->next == NULL)
		return pHead;
	ListNode* ptr = pHead;
	ListNode* LittleList = (ListNode*)malloc(sizeof(ListNode));
	ListNode* GreatList = (ListNode*)malloc(sizeof(ListNode));
	ListNode* LittleNode = LittleList;
	ListNode* GreatNode = GreatList;

	while (ptr)
	{
		if (ptr->val < x)
		{
			LittleList->next = ptr;
			ptr = ptr->next;

			LittleList = LittleList->next;
		}
		else
		{
			GreatList->next = ptr;
			ptr = ptr->next;

			GreatList = GreatList->next;
			
		}
	}
		LittleList->next = GreatNode;
		GreatList->next = NULL;

		return LittleNode->next;
}


int main()
{
	ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
	n1->val = 5;
	ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
	n2->val = 2;
	ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
	n3->val = 3;
	ListNode* n4 = (ListNode*)malloc(sizeof(ListNode));
	n4->val = 1;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	partition(n1, 4);
	//printf("%d\n", ret);

	return 0;
}