#define _CRT_SECURE_NO_WARNINGS 1
//
//struct S s
//{
//	char a;
//	int b;
//	double d;
//};

//
//char * longestPalindrome(char * s){
//	int head = 0;
//	int tail = 1;
//	int count = 0;
//	int max = 0;
//	int return_head = 0;
//	int return_tail = 0;
//	int left = 0;
//	int right = 0;
//	while (s[head])
//	{
//		if (s[tail] == s[head])
//		{
//			left = head;
//			right = tail;
//			while (left < right)
//			{
//				if (s[left] != s[right])
//					break;
//				left++;
//				right--;
//				count++;
//			}
//			head++;
//
//		}
//		else
//			tail++;
//
//		if (left == right)
//		{
//			if (count > max)
//			{
//				max = count;
//				return_head = head;
//				return_tail = tail;
//			}
//			count = 0;
//			head++;
//			tail = head + 1;
//		}
//		else
//			tail++;
//		if (s[tail] == '\0')
//		{
//			head++;
//			tail = head + 1;
//		}
//	}
//	s = s + return_head;
//	*(s + (return_tail + 1)) = '\0';
//	return s;
//}

char * longestPalindrome(char * s){
	int head = 0;
	int tail = 1;
	int oldhead = 0;
	int returnhead = 0;
	int returntail = 0;
	int count = 0;
	int max = 0;
	while (s[head + 1])
	{
		if (s[head] == s[tail])
		{
			oldhead = head;
			while (head < tail)
			{
				if (s[head] != s[tail])
				{
					count = 0;
					break;
				}
				head++;
				tail--;
				count++;
			}
		}
		else
			tail++;
		if (head >= tail)
		{
			if (count > max)
			{
				max = count;
				returnhead = oldhead;
			}
			count = 0;
			head = oldhead + 1;
			tail = head + 1;
		}
		else if (s[tail] == '\0')
		{
			head++;
			tail = head + 1;
		}
		else if (0 == count)
		{
			head = oldhead + 1;
			tail = tail + 1;
		}

	}
	s = s + returnhead;
	returntail = 2 * returnhead + 1;
	*(s + (returntail + 1)) = '\0';
	return s;
}