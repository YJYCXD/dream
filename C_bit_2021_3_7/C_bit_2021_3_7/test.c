#define _CRT_SECURE_NO_WARNINGS 1


//����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ�����������������������ǵ������±ꡣ

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


//�������� �ǿ� ��������ʾ�����Ǹ�������������ÿλ���ֶ��ǰ��� ���� �ķ�ʽ�洢�ģ�����ÿ���ڵ�ֻ�ܴ洢 һλ ���֡�


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
//	//��һ��Ƚ�����
//	//���Ը�Ϊ������Ȳ���ȣ����ڼ�0
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

//����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�


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