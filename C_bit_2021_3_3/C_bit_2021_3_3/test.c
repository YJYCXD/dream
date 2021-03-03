#define _CRT_SECURE_NO_WARNINGS 1

//���������һ���ط���û�취����ģ�����������������ݴ�������������û�л����ͻ�������л�һ��������û�а취���

//bool hasCycle(struct ListNode *head) {
//	//����ǻ��Ļ������������ڲ������NULL����ô������ÿһ���ڵ���湹��һ��NULL
//	//��Ϊ��ǣ����cur��next��next��NULL�Ļ���˵��curָ����������ڵĽڵ�
//	if (head == NULL || head->next == NULL)
//		return false;
//	if (head->next == head)
//		return true;
//	struct ListNode* cur = head;
//	// head->next = NULL;
//	while (cur)
//	{
//		struct ListNode* next = cur->next;
//		if (cur->next == cur)
//			return true;
//		if (cur->next == NULL)
//			return false;
//		if (cur != head && cur->next->next == NULL)
//			return true;
//		cur->next = NULL;
//		cur = next;
//	}
//	return false;
//}


//�ж��л������ÿ���ָ��
//bool hasCycle(struct ListNode *head) {
//	//�����ÿ���ָ�������
//	if (head == NULL)
//		return false;
//	struct ListNode* slow = head;
//	struct ListNode* fast = head->next;
//	while (slow != fast)
//	{
//		if (fast == NULL || fast->next == NULL)
//			return false;
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return true;
//}


struct Node* copyRandomList(struct Node* head) {
	if (head == NULL)
		return NULL;
	struct Node* cur = head;
	struct Node* newhead = (struct Node*)malloc(sizeof(struct Node));
	struct Node* tail = newhead;
	while (cur)
	{
		struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
		tail->next = newnode;
		tail = tail->next;
		tail->val = cur->val;
		tail->next = NULL;
		cur = cur->next;
	}
	struct Node* newcur = newhead->next;
	cur = head;


	while (cur)
	{
		int count = 0;
		struct Node* random = head;
		struct Node* newrandom = newhead->next;
		while (cur->random != random)
		{
			random = random->next;
			count++;
		}
		while (count--)
		{
			newrandom = newrandom->next;
		}
		newcur->random = newrandom;
		newcur = newcur->next;
		cur = cur->next;
	}
	return newhead->next;
}