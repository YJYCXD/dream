#define _CRT_SECURE_NO_WARNINGS 1


//С�����ڿ���ѧϰ�˶����ư˽�����ʮ�����ƺ󣬶Խ���ת��������Ũ�����Ȥ��
//��Ϊ��������������6����������֪��һ������ʾΪ�����ƺ�Ľ����������������������⡣

//
//#include <stdio.h>
//int main()
//{
//	long n = 0;
//	scanf("%d", &n);
//	int reminder = 0;
//	long ans = 0;
//	long mul = 1;
//	while (n)
//	{
//		reminder = n % 6;
//		n /= 6;
//		ans += mul * reminder;
//		mul *= 10;
//	}
//	printf("%ld\n", ans);
//	return 0;
//}


//С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������


//#include <stdio.h>
//int main()
//{
//	long n = 0;
//	scanf("%d", &n);
//	long i = 0;
//	long sum = 0;
//	for (i = 1; i <= n; i++)
//		sum += i;
//
//	printf("%ld\n", sum);
//	return 0;
//}


//�������ڵ�ʱ���Լ�Ҫ˯��ʱ��k����λ��minute�����м��ÿո�ֿ���
//�����ʽ��hour:minute k(��hour��minute��ֵΪ1������Ϊ1��������01)
//(0 �� hour �� 23��0 �� minute �� 59��1 �� k �� 109)


//#include <stdio.h>
//int main()
//{
//	int hour = 0;
//	int minute = 0;
//	long k = 0;
//	scanf("%d:%d %d", &hour, &minute, &k);
//	hour += (k / 60);
//	if (hour >= 24)
//		hour %= 24;
//
//	minute += (k % 60);
//	if (minute >= 60)
//	{
//		hour++;
//		minute %= 60;
//	}
//	printf("%02d:%02d", hour, minute);
//	return 0;
//}


//С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�
//����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
//�����С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩

//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int time = 0;
//	if (n <= 12)
//	{
//		time = 2;
//	}
//	else
//	{
//		time = (n / 12) * 4 + 2;
//	}
//	printf("%d\n", time);
//	return 0;
//}

//С��������ڿ���ѧϰ����������������������Լ������С��������
//��������Ȼ���������������������Լ������С������֮�ͣ�������������������⡣

//
//#include <stdio.h>
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%d%d", &n, &m);
//	long long gcd = 0;
//	long long lcm = 0;
//	int max = n > m ? n : m;
//	int min = n < m ? n : m;
//	gcd = min;
//	while (max % min)
//	{
//		gcd = max % min;
//		max = gcd > min ? gcd : min;
//		min = gcd < min ? gcd : min;
//	}
//	lcm = m * (n / gcd);
//	printf("%lld\n", gcd + lcm);
//	return 0;
//}



//С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
//���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�


//#include <stdio.h>
//int main()
//{
//	long n = 0;
//	scanf("%ld", &n);
//	long newnum = 0;
//	long mul = 1;
//	while (n)
//	{
//		if ((n % 10) % 2 == 0)
//			newnum += 0 * mul;
//		else
//			newnum += 1 * mul;
//		mul *= 10;
//		n /= 10;
//	}
//	printf("%ld\n", newnum);
//	return 0;
//}


//����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣


//struct ListNode* middleNode(struct ListNode* head){
//	int count = 0;
//	struct ListNode* ptr = head;
//	while (ptr)
//	{
//		ptr = ptr->next;
//		count++;
//	}
//	ptr = head;
//	count = count / 2;
//	while (count)
//	{
//		ptr = ptr->next;
//		count--;
//	}
//	return ptr;
//}


#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
	// write code here
	int count = 0;
	int n = 0;
	struct ListNode* ptr = pListHead;
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	if (count < k)
		return NULL;
	else if (k == 0)
		return pListHead;
	else
	{
		ptr = pListHead;
		while (n < count - k)
		{
			ptr = ptr->next;
			n++;
		}
		return ptr;
	}

}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n1->val = 1;
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n2->val = 2;
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n3->val = 3;
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n4->val = 4;
	struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	n5->val = 5;


	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;


	FindKthToTail(n1, 1);

	return 0;
}