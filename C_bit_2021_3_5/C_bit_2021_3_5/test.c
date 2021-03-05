#define _CRT_SECURE_NO_WARNINGS 1

//删除重复节点


//ListNode* deleteDuplication(ListNode* pHead) {
//	if (pHead == NULL || pHead->next == NULL)
//		return pHead;
//	ListNode* yammyHead = (ListNode*)malloc(sizeof(ListNode));
//	yammyHead->next = pHead;
//	ListNode* prepre = yammyHead;
//	ListNode* pre = pHead;
//	ListNode* cur = pHead->next;
//	while (cur)
//	{
//		if (cur->val == pre->val)
//		{
//			while (cur->val == pre->val)
//			{
//				if (cur == NULL)
//					break;
//				cur = cur->next;
//
//			}
//			while (pre != cur)
//			{
//				prepre->next = pre->next;
//				free(pre);
//				pre = prepre->next;
//			}
//			if (cur == NULL)
//				break;
//		}
//		else
//		{
//			prepre = pre;
//			pre = cur;
//		}
//		cur = cur->next;
//
//	}
//	pHead = yammyHead->next;
//	free(yammyHead);
//	yammyHead = NULL;
//	return pHead;
//}


//深度拷贝

//struct Node* copyRandomList(struct Node* head) {
//	if (head == NULL)
//		return NULL;
//	struct Node* cur = head;
//	struct Node* newhead = (struct Node*)malloc(sizeof(struct Node));
//	struct Node* tail = newhead;
//	while (cur)
//	{
//		struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//		tail->next = newnode;
//		tail = tail->next;
//		tail->val = cur->val;
//		tail->next = NULL;
//		cur = cur->next;
//	}
//	struct Node* newcur = newhead->next;
//	cur = head;
//
//
//	while (cur)
//	{
//		int count = 0;
//		struct Node* random = head;
//		struct Node* newrandom = newhead->next;
//		while (cur->random != random)
//		{
//			random = random->next;
//			count++;
//		}
//		while (count--)
//		{
//			newrandom = newrandom->next;
//		}
//		newcur->random = newrandom;
//		newcur = newcur->next;
//		cur = cur->next;
//	}
//	return newhead->next;
//}



#include <stdio.h>
#include <string.h>
int main()
{
	char str[101] = { 0 };
	char newstr[101] = { 0 };
	gets(str);
	int sz = strlen(str);
	int count = sz - 1;
	int t = 0;
	int i = 0;
	while (sz)
	{
		while (str[count] != ' ' && count)
			count--;

		if (count == 0)
		{
			for (i = count; i < sz; i++)
			{
				newstr[t] = str[i];
				t++;
			}
			break;
		}
		else
		{
			for (i = count + 1; i < sz; i++)
			{
				newstr[t] = str[i];
				t++;
			}
		}
		newstr[t] = ' ';
		t++;
		sz = count;
		count = count--;
	}
	newstr[t] = '\0';
	puts(newstr);
	return 0;
}