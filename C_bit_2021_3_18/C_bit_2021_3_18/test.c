#define _CRT_SECURE_NO_WARNINGS 1

//给你两个二进制字符串，返回它们的和（用二进制表示）。

char * addBinary(char * a, char * b){
	int len = fmax(strlen(a), strlen(b)) + 2;
	char* returnStr = (char*)malloc(sizeof(char) * len);
	int str1 = strlen(a) - 1;
	int str2 = strlen(b) - 1;
	int next = 0;
	int sum = 0;
	int i = len - 2;
	while ((str1 >= -1) || (str2 >= -1))
	{
		int num1 = str1 >= 0 ? a[str1] - '0' : 0;
		int num2 = str2 >= 0 ? b[str2] - '0' : 0;

		sum = num1 + num2 + next;
		returnStr[i] = sum % 2 + '0';
		printf("%d ", returnStr[i]);

		if (sum == 2)
		{
			next = 1;
		}
		else
		{
			next = 0;
		}
		i--;
		str1--;
		str2--;
	}
	returnStr[len - 1] = '\0';
	if (returnStr[0] == '0')
		return returnStr + 1;
	else
		return returnStr;
}