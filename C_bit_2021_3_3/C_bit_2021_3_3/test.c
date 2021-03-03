#define _CRT_SECURE_NO_WARNINGS 1

//这个方法有一个地方是没办法解决的，就是如果链表中数据大于两个，并且没有环，就会产生和有环一样的现象，没有办法完成

//bool hasCycle(struct ListNode *head) {
//	//如果是环的话，整个链表内不会出现NULL，那么可以在每一个节点后面构造一个NULL
//	//作为标记，如果cur的next的next是NULL的话，说明cur指向的是链表内的节点
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


//判断有环可以用快慢指针
//bool hasCycle(struct ListNode *head) {
//	//可以用快慢指针来解决
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