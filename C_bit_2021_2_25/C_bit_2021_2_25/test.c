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


//����ָ��Ԫ�ؽڵ�ɾ��
//
//struct ListNode* removeElements(struct ListNode* head, int val){
//	struct ListNode* pre = NULL;
//	struct ListNode* cur = head;
//	struct ListNode* next = NULL;
//	struct ListNode* DelNode = NULL;
//	//1������Ϊ��
//	if (head == NULL)
//	{
//		return head;
//	}
//	//2����������һ������Ԫ��
//	{
//		while (cur)
//		{
//			next = cur->next;
//			if (cur->val == val)
//			{
//				DelNode = cur;
//				cur = next;
//				//���pre��Ϊ�գ�˵������ĵ�һ��Ԫ�ز���val����pre��nextָ��next��Ҳ����˵����free��headָ��Ŀռ�
//				if (pre != NULL)
//				{
//					pre->next = next;
//				}
//				//���preΪ��ָ�룬˵������ĵ�һ��Ԫ����val�����ֱ���ͷŻᶪ��head�������headָ��next��ʹͷ���ͺ�����������
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


//��ת����

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


//KiKi��֪��һ��n�׷����Ƿ�Ϊ�����Ǿ������������ж���
//�����Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�

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


//KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������

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


//KiKi��һ����������֪������k���б任���б任��õ��ľ������̰������

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
		while ((t = getchar()) == '\n');//��whileѭ��������'\n'
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