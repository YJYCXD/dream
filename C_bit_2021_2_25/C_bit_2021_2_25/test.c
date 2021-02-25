#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 4);
//	free(arr);
//	arr = NULL;
//
//	return 0;
//}


//链表指定元素节点删除
//
//struct ListNode* removeElements(struct ListNode* head, int val){
//	struct ListNode* pre = NULL;
//	struct ListNode* cur = head;
//	struct ListNode* next = NULL;
//	struct ListNode* DelNode = NULL;
//	//1、链表为空
//	if (head == NULL)
//	{
//		return head;
//	}
//	//2、链表中有一个或多个元素
//	{
//		while (cur)
//		{
//			next = cur->next;
//			if (cur->val == val)
//			{
//				DelNode = cur;
//				cur = next;
//				//如果pre不为空，说明链表的第一个元素不是val，将pre的next指向next，也就是说不会free掉head指向的空间
//				if (pre != NULL)
//				{
//					pre->next = next;
//				}
//				//如果pre为空指针，说明链表的第一个元素是val，如果直接释放会丢掉head，因此让head指向next，使头部和后面连接起来
//				else
//				{
//					head = next;
//				}
//				free(DelNode);
//				DelNode = NULL;
//			}
//			else
//			{
//				pre = cur;
//				cur = next;
//			}
//		}
//
//	}
//	return head;
//
//}


//反转链表

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

//
//struct ListNode* reverseList(struct ListNode* head){
//	if (head == NULL)
//	{
//		return head;
//	}
//	else
//	{
//		struct ListNode* ptr1 = head;
//		struct ListNode* ptr2 = head;
//		struct ListNode* cur = NULL;
//		struct ListNode* pre = NULL;
//
//		if (ptr2->next != NULL)
//		{
//			while (ptr1->next != NULL)
//			{
//				pre = ptr1;
//				ptr1 = ptr1->next;
//			}
//			int t = ptr2->val;
//			ptr2->val = ptr1->val;
//			cur = ptr1;
//			pre->next = NULL;
//			ptr2 = ptr2->next;
//			ptr1 = ptr2;
//			if (ptr2)
//			{
//				reverseList(ptr2);
//			}
//			cur->val = t;
//			cur->next = NULL;
//			pre->next = cur;
//
//		}
//		return head;
//	}
//
//
//}


//KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。
//上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。

//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//				flag = 1;
//		}
//	}
//	if (0 == flag)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j< m; j++)
//			scanf("%d", &arr1[i][j]);
//	}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			arr2[j][i] = arr1[i][j];
//		}
//	}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//			printf("%d ", arr2[j][i]);
//
//		printf("\n");
//	}
//	return 0;
//}


//KiKi有一个矩阵，他想知道经过k次行变换或列变换后得到的矩阵。请编程帮他解答。

#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	int k = 0;
	char t = 0;
	int tmp = 0;
	int a = 0;
	int b = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j< m; j++)
			scanf("%d", &arr[i][j]);
	}
	scanf("%d", &k);
	while (k)
	{
		while ((t = getchar()) == '\n');//用while循环来吸收'\n'
			scanf("%d%d", &a, &b);


		if (t == 'r')
		{
			for (i = 0; i < m; i++)
			{
				tmp = arr[a - 1][i];
				arr[a - 1][i] = arr[b - 1][i];
				arr[b - 1][i] = tmp;
			}
		}
		else if (t == 'c')
		{
			for (i = 0; i < n; i++)
			{
				tmp = arr[i][a - 1];
				arr[i][a - 1] = arr[i][b - 1];
				arr[i][b - 1] = tmp;
			}
		}
		--k;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}
	return 0;
}