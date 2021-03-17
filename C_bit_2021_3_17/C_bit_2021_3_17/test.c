#define _CRT_SECURE_NO_WARNINGS 1

//给你一个字符串 s，由若干单词组成，单词之间用空格隔开。返回字符串中最后一个单词的长度。如果不存在最后一个单词，请返回 0 。

//int lengthOfLastWord(char * s){
//	int right = strlen(s) - 1;
//	printf("%d", right);
//	int count = 0;
//	while ((s[right] == ' ') && right > 0)
//	{
//		right--;
//	}
//	while (s[right] != ' ')
//	{
//		count++;
//		if (0 == right)
//			break;
//		right--;
//	}
//	return count;
//}


//给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* plusOne(int* digits, int digitsSize, int* returnSize){
	int end = digitsSize - 1;
	int next = 0;
	int sum = 0;
	while (end >= 0)
	{
		if (end == digitsSize - 1)
			sum = digits[end] + 1;
		else
			sum = digits[end] + next;
		digits[end] = sum % 10;
		printf("%d", digits[end]);
		if (sum == 10)
		{
			next = 1;
			end--;
		}
		else
			break;
	}
	if (next == 1 && digits[0] == 0)
	{
		int* p = (int*)realloc(digits, sizeof(int) * (digitsSize + 1));
		if (p == NULL)
		{
			return NULL;
		}
		else
		{
			digits = p;
		}
		for (int i = digitsSize; i > 0; i--)
		{
			digits[i] = digits[i - 1];
		}
		digits[0] = 1;
		*returnSize = digitsSize + 1;
	}
	else
		*returnSize = digitsSize;

	return digits;
}