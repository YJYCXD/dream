#define _CRT_SECURE_NO_WARNINGS 1

//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��

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
//			//return false;//�����;���أ���û���ͷſ��ٵ��ڴ棬�����ڴ�й©
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


//��дһ�������������ַ��������е������ǰ׺��

char * longestCommonPrefix(char ** strs, int strsSize){
	//strsSize�����ж������ַ���
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