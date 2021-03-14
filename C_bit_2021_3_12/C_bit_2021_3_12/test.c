#define _CRT_SECURE_NO_WARNINGS 1

//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

//bool isValid(char * s){
//	if (*(s + 1) == '\0')
//		return false;
//	char* stack = (char*)malloc(sizeof(char) * strlen(s));
//	char* ptr = stack;
//	bool ret = true;
//	while (*s)
//	{
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			*ptr = *s;
//			s++;
//			ptr++;
//		}
//		else if (*s == ')' || *s == ']' || *s == '}')
//		{
//			if (ptr == stack)
//			{
//				ret = false;
//				break;
//			}
//			//return false;//如果中途返回，就没有释放开辟的内存，导致内存泄漏
//			if ((*(ptr - 1) == '(' && *s == ')') || (*(ptr - 1) == '[' && *s == ']') || ((*(ptr - 1) == '{' && *s == '}')))
//			{
//				ptr--;
//				s++;
//			}
//			else
//			{
//				ret = false;
//				break;
//			}
//		}
//	}
//	if (ptr != stack)
//	{
//		ret = false;
//	}
//	free(stack);
//	stack = NULL;
//	return ret;
//}


//编写一个函数来查找字符串数组中的最长公共前缀。

char * longestCommonPrefix(char ** strs, int strsSize){
	//strsSize代表有多少组字符串
	char* LCP = (char*)malloc(sizeof(char) * 201);
	memset(LCP, 0, sizeof(LCP));
	int i = 1;
	int j = 0;
	int count = 0;
	for (i = 0; i < strsSize; i++)
	{
		for (j = 0; j< 200; j++)
		{
			if (i == 0)
			{
				LCP[j] = strs[i][j];
			}
			else
			{
				if (strs[i][j] != LCP[j])
				{
					LCP[j] = '\0';
				}
			}
			if (strs[i][j] == '\0')
			{
				break;
			}
		}
	}
	return LCP;
}