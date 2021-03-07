#define _CRT_SECURE_NO_WARNINGS 1


//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出和为目标值的那两个整数，并返回它们的数组下标。

//int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//	int cur = 0;
//	int next = 1;
//	int* returnArr = (int*)malloc(sizeof(int) * 2);
//	while (cur < numsSize - 1)
//	{
//		while (next < numsSize)
//		{
//			if (nums[cur] + nums[next] == target)
//			{
//				returnArr[0] = cur;
//				returnArr[1] = next;
//				*returnSize = 2;
//				return returnArr;
//			}
//			next++;
//
//		}
//		cur++;
//		next = cur + 1;
//	}
//	return returnArr;
//}


//给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。


//typedef struct ListNode ListNode;
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
//	ListNode* newListHead = (ListNode*)malloc(sizeof(ListNode));
//	newListHead->next = NULL;
//	ListNode* ptr = newListHead;
//	int next = 0;
//	int add = 0;
//	while (l1 && l2)
//	{
//		int num1 = l1 ? l1->val : 0;
//		int num2 = l2 ? l2->val : 0;
//		add = num1 + num2 + next;
//		ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//		newNode->next = NULL;
//		newNode->val = add % 10;
//		if (add > 9)
//		{
//			next = 1;
//		}
//		else
//		{
//			next = 0;
//		}
//		ptr->next = newNode;
//		ptr = ptr->next;
//		l1 = l1->next;
//		l2 = l2->next;
//	}
//	//这一块比较冗余
//	//可以改为如果长度不相等，等于加0
//	if (l1 == NULL)
//	{
//		while (l2)
//		{
//			add = l2->val + next;
//			ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//			newNode->next = NULL;
//			newNode->val = add % 10;
//			if (add > 9)
//			{
//				next = 1;
//			}
//			else
//			{
//				next = 0;
//			}
//			ptr->next = newNode;
//			ptr = ptr->next;
//			l2 = l2->next;
//		}
//	}
//	else if (l2 == NULL)
//	{
//		while (l1)
//		{
//			add = l1->val + next;
//			ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//			newNode->next = NULL;
//			newNode->val = add % 10;;
//			if (add > 9)
//			{
//				next = 1;
//			}
//			else
//			{
//				next = 0;
//			}
//			ptr->next = newNode;
//			ptr = ptr->next;
//			l1 = l1->next;
//		}
//	}
//	if (next)
//	{
//		ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//		newNode->next = NULL;
//		newNode->val = next;
//		ptr->next = newNode;
//	}
//	ListNode* head = newListHead->next;
//	return head;
//}

//给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。


int lengthOfLongestSubstring(char * s){
	if (*s == '\0')
		return 0;
	if (*(s + 1) == '\0')
		return 1;
	int head = 0;
	int pre = 0;
	int cur = 1;
	int count = 1;
	int max = 0;
	while (s[cur])
	{
		int ptr = head;
		if (s[pre] != s[cur])
		{
			while (ptr < pre)
			{
				if (s[ptr] == s[cur])
				{
					head++;
					if (count > 1)
						count--;
					break;

				}
				ptr++;
			}
			if (ptr == pre)
				count++;
			else
				continue;

		}
		else
		{
			head = cur;
			count = 1;

		}
		ptr = head;;
		pre++;
		cur++;
		if (count > max)
			max = count;
	}
	if (max == 0)
		max = 1;
	return max;
}