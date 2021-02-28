#define _CRT_SECURE_NO_WARNINGS 1

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？

//本质是斐波那契数列
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 1;
//	int b = 1;
//	int ans = 0;
//	while (--n)
//	{
//		ans = a + b;
//		a = b;
//		b = ans;
//	}
//	printf("%d\n", ans);
//	return 0;
//}	



//本质是斐波那契数列
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	int tail = 0;
//	int cur = 0;
//	int k = 0;
//	int i = 0;
//	int t = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		if (0 == i)
//		{
//			arr[cur] = k;
//			tail++;
//		}
//		else
//		{
//			if (t == k)
//				continue;
//			else
//			{
//				cur = 0;
//				while (k > arr[cur] && cur < tail)
//				{
//					cur++;
//				}
//				for (i = tail - 1; i >= cur; i--)
//				{
//					arr[i + 1] = arr[i];
//				}
//				arr[cur] = k;
//				tail++;
//			}
//		}
//		t = k;
//
//	}
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。
//但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。


//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	//正常的排序时间太长
//	//取巧的办法：n是1到100000之间，定义100000的数组
//	//输入的元素就放在相应的位置上，就不用排序
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100000] = { 0 };
//	int k = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		arr[k] = k;
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i])
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}	

//你需要做的是统计s中子串“CHN”的个数。

//#include <stdio.h>
//int main()
//{
//	char str[8001] = { 0 };
//	scanf("%s", str);
//	long i = 0;
//	long Ccount = 0;
//	long Hcount = 0;
//	long Ncount = 0;
//
//	for (i = 0; i < strlen(str); i++)
//	{
//		if (str[i] == 'C')
//			Ccount++;
//		else if (str[i] == 'H')
//			Hcount += Ccount;
//		else if (str[i] == 'N')
//			Ncount += Hcount;
//	}
//	printf("%ld\n", Ncount);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 4;
//	int b = ++(a++);
//	printf("%d\n", b);
//	return 0;
//}



typedef struct SList
{
	int data;
	struct SList* next;
}SL;

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	SL* head = (SL*)malloc(sizeof(SL));
	SL* tail = head;
	int i = 0;
	int m = 0;
	SL* pre = NULL;
	SL* cur = head;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &(tail->data));
		SL* node = (SL*)malloc(sizeof(SL));
		node->next = NULL;
		tail->next = node;
		tail = tail->next;
	}
	scanf("%d", &m);
	while (cur)
	{
		SL* next = cur->next;
		if (cur->data == m)
		{
			n--;
			if (pre == NULL)
			{
				head = cur->next;
				free(cur);
				cur = head;
			}
			else
			{
				free(cur);
				cur = next;
				pre->next = next;
			}
		}
		else
		{
			pre = cur;
			cur = next;
		}
	}
	cur = head;
	printf("%d\n", n);
	while (cur->next)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	return 0;
}