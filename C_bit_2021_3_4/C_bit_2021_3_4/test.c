#define _CRT_SECURE_NO_WARNINGS 1


//²åÈëÅÅÐò

struct ListNode* insertionSortList(struct ListNode* head){
	if (head == NULL || head->next == NULL)
		return head;

	struct ListNode* newhead = head;
	struct ListNode* cur = head->next;
	struct ListNode* pre = head;


	while (cur)
	{
		struct ListNode* slow = newhead;
		struct ListNode* fast = newhead;
		struct ListNode* tail = pre;


		if (cur->val < pre->val)
		{
			pre->next = cur->next;
			while (slow != tail && slow->next != tail)
			{
				while (fast != tail && fast->next != tail)
				{
					slow = slow->next;
					fast = fast->next->next;
				}
				if (slow->val > cur->val)
				{
					tail = slow;
					slow = newhead;
					fast = newhead;
				}
				else
				{
					fast = slow;
				}
			}
			if (slow->val > cur->val)
			{
				cur->next = slow;
				newhead = cur;

			}
			else
			{
				slow->next = cur;
				cur->next = tail;
			}
		}
		else
		{
			pre = cur;
			cur = cur->next;
		}
		cur = pre->next;
	}
	return newhead;
}