#define _CRT_SECURE_NO_WARNINGS 1
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int myatoi(const char* string)
{
	char* space = (char*)malloc(sizeof(char));
	*space = 0;
	int cur = 0;
	int ptr = 0;
	int i = 0;
	int flag = 0;
	int size = 1;
	long long sum = 0;
	long long mul = 1;
	while (string[cur])
	{
		if (isspace(string[cur]) != 0)
		{
			cur++;
			continue;
		}
		if (string[cur] == '-' || string[cur] == '+')
		{
			if (string[cur] == '-')
				flag = -1;
			if (string[cur] == '+')
				flag = 1;
			ptr = cur + 1;
			while (string[ptr] >= '0' && string[ptr] <= '9')
			{
				size++;
				space[i] = string[ptr];
				char* ps = (char*)realloc(space, sizeof(char) * size);
				if (ps == NULL)
					return 0;
				else
					space = ps;
				i++;
				ptr++;
			}
			if (space[0] == 0)
				cur = ptr;
			else
				break;
		}
		else
		{
			cur++;
		}
	}
	//space[i] = '\0';
	if (space[0] == 0)
		return 0;
	for (i = size - 2; i >= 0; i--)
	{
		sum = sum + flag * (space[i] - '0') * mul;
		mul *= 10;
		if (sum > INT_MAX)
			return INT_MAX;
		else if (sum < INT_MIN)
			return INT_MIN;
	}
	free(space);
	space = NULL;
	return (int)sum;
}

int main()
{
	char *s; int i;


	s = "  -9985 tre";      /* Test of atoi */
	i = myatoi(s);
	printf("atoi test: ASCII string: %s\t\tinteger: %d\n", s, i);


	return 0;
}


