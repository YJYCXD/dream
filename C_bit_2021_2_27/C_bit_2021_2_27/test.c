#define _CRT_SECURE_NO_WARNINGS 1


//小乐乐在课上学习了二进制八进制与十六进制后，对进制转换产生了浓厚的兴趣。
//因为他的幸运数字是6，所以他想知道一个数表示为六进制后的结果。请你帮助他解决这个问题。

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


//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。


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


//输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
//输入格式：hour:minute k(如hour或minute的值为1，输入为1，而不是01)
//(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)


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


//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
//电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
//请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）

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

//小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，
//但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。

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



//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
//如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。


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


//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。


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