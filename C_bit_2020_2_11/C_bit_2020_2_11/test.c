#define _CRT_SECURE_NO_WARNINGS 1

//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�
//����1461 ���Բ�ֳɣ�1��461��,��14��61��,��146��1),
//������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//���磺655 = 6 * 55 + 65 * 5
//��� 5λ���е����� Lily Number��
//
//#include <stdio.h>
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum3 = 0;
//	int sum4 = 0;
//	int i = 0;
//	for (i = 10000; i<100000; i++)
//	{
//		sum1 = (i / 10000)*(i % 10000);
//		sum2 = (i / 1000)*(i % 1000);
//		sum3 = (i / 100)*(i % 100);
//		sum4 = (i / 10)*(i % 10);
//		if (sum1 + sum2 + sum3 + sum4 == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//�ı�һ�£����Լ����������еı���ˮ�ɻ�
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 1;
//	int t = 0;
//	int mod = 0;
//	int sum = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		//ÿһ��ѭ��Ҫ��sum��count���³�ʼ�������������һ�εĽ��
//		t = i;
//		sum = 0;
//		count = 1;
//		while (t / 10)
//		{
//			count++;
//			t /= 10;
//		}
//		t = i;
//		mod = (int)pow(10, count-1);
//		while (mod>9)
//		{
//			sum += (i / mod)*(i%mod);
//			mod /= 10;
//		}
//		if (i < 10)
//			sum = i;
//		if (sum == i)
//			printf("%d ", i);
//
//	}
//	return 0;
//}



//���п��Կ�ʼ�ˣ���Ҷ���ȡ�úóɼ�������ǰ������
//�Ӽ�������n��ѧ���ɼ���������40���������ÿ������ǰ��ߵĳɼ���

//#include <stdio.h>
//int main()
//{
//	int score[40] = { 0 };
//	int n = 0;
//	int i = 0;
//	int flag = 0;
//	scanf("%d", &n);
//	for (i = 0; i<n; i++)
//		scanf("%d", &score[i]);
//	for (i = 0; i<n - 1; i++)
//	{
//
//		int j = 0;
//		for (j = 0; j<n - i - 1; j++)
//		{
//			if (score[j]<score[j + 1])
//			{
//				flag = 1;
//				int t = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = t;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	for (i = 0; i<5; i++)
//		printf("%d ", score[i]);
//	return 0;
//}

//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.

//#include <stdio.h>
//int main()
//{
//	char tickets[100];
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i<100; i++)
//	{
//		scanf("%c", &tickets[i]);
//		if (tickets[i] == 'A')
//			count1++;
//		if (tickets[i] == 'B')
//			count2++;
//		if (tickets[i] == '0')
//			break;
//	}
//	if (count1>count2)
//		printf("A\n");
//	else if (count1<count2)
//		printf("B\n");
//	else
//		printf("E\n");
//	return 0;
//} 


//KiKi��֪�����Ŀ��Գɼ��Ƿ�������������жϡ�
//�Ӽ�������һ��������ʾ�ĳɼ�������жϳɼ��Ƿ���90~100֮�䣬������������Perfect����

//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 90 && score <= 100)
//			printf("Perfect\n");
//	}
//	return 0;
//}

//KiKi��֪�����Ŀ��Է����Ƿ�ͨ����������жϡ��Ӽ�����������һ��������ʾ�ķ�����
//����жϸ÷����Ƿ��ڼ���Χ�ڣ�������񣬼����������ڵ���60�֣��������Pass�������������Fail����


//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}


//KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o),U(u)��ΪԪ��������������ĸ��Ϊ������
//�������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int ch = 0;
//	while (~scanf("%c", &ch))
//	{
//		getchar();
//		ch = tolower(ch);
//		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//			printf("Vowel\n");
//		else
//			printf("Consonant\n");
//	}
//	return 0;
//}


//KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�

#include <stdio.h>
int main()
{
	char ch = 0;
	while (~scanf("%c", &ch))
	{
		getchar();
		if (isalpha(ch))
			printf("%c is an alphabet.\n", ch);
		else
			printf("%c is not an alphabet.\n", ch);
	}
	return 0;
} 