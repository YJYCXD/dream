#define _CRT_SECURE_NO_WARNINGS 1

//����һ���ַ��� s�������ɵ�����ɣ�����֮���ÿո�����������ַ��������һ�����ʵĳ��ȡ�������������һ�����ʣ��뷵�� 0 ��

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


//����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��

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