#define _CRT_SECURE_NO_WARNINGS 1
//
//struct ListNode reverseList(struct ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//		return head;
//	else
//	{
//		struct ListNode* newhead = NULL;
//		struct ListNode* cur = head;
//		while (cur)
//		{
//			struct ListNode* next = cur->next;
//
//			cur->next = newhead;
//			newhead = cur;
//			cur = next;
//		}
//
//		return newhead;
//	}
//	
//}


//杨辉三角的前n行

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30][30] = { 0 };
//	int i = 0;
//	int j = 0;
//	arr[0][0] = 1;
//	for (i = 1; i < n; i++)
//	{
//		arr[i][0] = 1;
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//		arr[i][j] = 1;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%5d", arr[i][j]);
//
//		printf("\n");
//	}
//	return 0;
//}


//KiKi和BoBo玩 “井”字棋。
//也就是在九宫格中，只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，就能获胜。请根据棋盘状态，判断当前输赢。

#include <stdio.h>
int main()
{
	char Board[3][3] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			Board[i][j] = getchar();
			getchar();
		}
	}
	char flag = 'O';
	while (flag == 'O')
	{
		//判断横向
		for (i = 0; i < 3; i++)
		{
			if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2])
			{
				flag = Board[i][0];
				break;
			}
		}

		for (i = 0; i < 3; i++)
		{
			if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i])
			{
				flag = Board[0][i];
				break;
			}
		}
		if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] || Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0])
		{
			flag = Board[1][1];
			break;
		}

		break;
	}
	if (flag == 'K')
		printf("KiKi wins!\n");
	else if (flag == 'B')
		printf("BoBo wins!\n");
	else
		printf("No winner!\n");
	return 0;
}