#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
//char* mystrstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	if (str2 == '\0')
//		return str1;
//	char* str2head = (char*)str2;
//	char* str1pre = (char*)str1;
//	while (*str1 && *str2)
//	{
//		if (*str1 == *str2)
//		{
//			str1pre = str1;
//			while (*str2)
//			{
//				if (*str1 != *str2)
//				{
//					str1 = str1pre + 1;
//					break;
//
//				}
//				str1++;
//				str2++;
//			}
//
//		}
//		else
//		{
//			str2 = str2head;
//			str1++;
//		}
//	}
//	if (*str1 == '\0' && *str2 != '\0')
//		return NULL;
//	return str1pre;
//}


//void* mymemcpy(void* dest, const void* str, size_t count)
//{
//	assert(dest && str);
//	size_t i = 0;
//	//也可以换成while循环
//	for (i = 0; i < count; i++)
//	{
//		((char*)dest)[i] = ((char*)str)[i];
//	}
//	return dest;
//}

//void* mymemmove(void* dest, const void* str, size_t count)
//{
//	assert(dest && str);
//	if (str > dest || ((char*)str + count - 1) < (char*)dest)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)str;
//			dest = (char*)dest + 1;
//			str = (char*)str + 1;
//		}
//	}
//	else
//	{
//		str = (char*)str + count - 1;
//		dest = (char*)dest + count - 1;
//		while (count--)
//		{
//			*(char*)dest = *(char*)str;
//			str = (char*)str - 1;
//			dest = (char*)dest - 1;
//		}
//	}
//
//	return dest;
//}

//int mymemcmp(void* buf1, void* buf2, size_t num)
//{
//	while (num--)
//	{
//		if (*(char*)buf1 != *(char*)buf2)
//			return *(char*)buf1 - *(char*)buf2;
//
//		buf1 = (char*)buf1 + 1;
//		buf2 = (char*)buf2 + 1;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char buffer1[] = "DWgaOtP12df0";
//	char buffer2[] = "DWGAOTP12DF0";
//	int n;
//	n = mymemcmp(buffer1, buffer2, sizeof(buffer1));
//	if (n>0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
//	else if (n<0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
//	else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
//	return 0;
//}

typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;

int hasCycle(struct ListNode *head) {
	//如果是环的话，整个链表内不会出现NULL，那么可以在每一个节点后面构造一个NULL
	//作为标记，如果cur的next的next是NULL的话，说明cur指向的是链表内的节点
	if (head == NULL || head->next == NULL)
		return 0;
	if (head->next == head)
		return 1;
	struct ListNode* gap = (struct ListNode*)malloc(sizeof(struct ListNode));
	gap->next = NULL;
	struct ListNode* cur = head->next;
	head->next = gap;
	while (cur)
	{
		struct ListNode* next = cur->next;
		if (cur->next == cur)
			return 1;
		if (cur->next && cur->next->next == gap)
			return 1;
		cur->next = gap;
		cur = next;
	}
	free(gap);
	return 0;
}

int main()
{
	ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
	n1->val = 1;
	ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
	n2->val = 2;
	ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
	n3->val = 3;
	ListNode* n4 = (ListNode*)malloc(sizeof(ListNode));
	n4->val = 4;
	ListNode* n5 = (ListNode*)malloc(sizeof(ListNode));
	n5->val = 5;
	ListNode* n6 = (ListNode*)malloc(sizeof(ListNode));
	n6->val = 7;
	ListNode* n7 = (ListNode*)malloc(sizeof(ListNode));
	n7->val = 9;
	ListNode* n8 = (ListNode*)malloc(sizeof(ListNode));
	n8->val = 4;
	ListNode* n9 = (ListNode*)malloc(sizeof(ListNode));
	n9->val = 2;
	ListNode* n10 = (ListNode*)malloc(sizeof(ListNode));
	n10->next = 3;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = n8;
	n8->next = n9;
	n9->next = n10;
	n10->next = n7;

	int ret = hasCycle(n1);
	return 0;
}