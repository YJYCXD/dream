#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int n = 100;
//	int i = 0;
//	//��������ѭ��100�Σ�������100���жϣ�Ч�ʲ���
//	/*for (i = 1; i <= n; i++)
//	{
//		//if (i % 2 != 0)//��ס���д��ʽ���ѳ���д����ߣ�����д���ұ�
//		if (1==i % 2)  
//			printf("%d ", i);
//	}*/
//
//	//����дֻ��ѭ��50�Σ����Ҳ���Ҫ�ж�
//	for (i = 1; i <= n; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char password[10] = { 0 };
//	printf("����������;>");
//	scanf("%s", password);
//	int ch = 0;//��int����ch����ΪEOF���ص���-1��char���ܽ���-1
//	while ((ch = getchar()) != '\n')  //��whileѭ������ջ�����������'\n'Ҳ�ᱻ����
//	{
//		;
//	}
//
//	printf("��ȷ��(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}

//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	//printf("������һ��������>");
//	//scanf("%d", &n);
//	//�����㷨����̫�ظ�
//	//֪��1�Ľ׳˾Ϳ��Լ���2�Ľ׳�
//	//2!=1!*2,3!=2!*3�ȵ�
//
//	/*for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}*/
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//���ֲ���(�۰����)
//���������������
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}