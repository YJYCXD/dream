#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	printf("������һ������\n");
//	scanf("%d", &m);
//	int i = 0;
//	/*int t = m;*/
//	printf("ż����");
//	for (i = 30; i >= 0; i-=2)
//	{
//		//������д�ȽϷ���������ֱ�Ӵ�ӡ�����Ҳ��ı�m��ֵ
//
//		printf("%d ", (m >> i) & 1);//������д����ı�m��ֵ
//		/*t = t >> i;
//		printf("%d ", t & 1);
//		t = m;*/
//	}
//	printf("\n");
//	printf("������");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//		/*t = t >> i;
//		printf("%d ", t & 1);
//		t = m;*/
//	}
//	printf("\n");
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = &arr[9];
//	int a = p - &arr[0];
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//
//	return 0;
//}

//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}


//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int count = 0;
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	int left = 0;
//	int right = count - 1;
//	while (left <= right)
//	{
//		char t = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = t;
//		left++;
//		right--;
//	}
//	printf("%s", str);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 0;
//	printf("������һ������:>\n");
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		sum += a;
//		a = a*10+a;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	
//	//�����ж�λ��
//	for (i = 0; i <= 100000; i++)
//	{
//		int t = i;
//		int sum = 0;
//		int count = 1;
//		while (t / 10 != 0)
//		{
//			count++;
//			t = t / 10;
//		}
//		t = i;
//		while (t!=0)
//		{
//			sum += pow(t%10, count);
//			t = t / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[26] = "            *            ";
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz-1;
//	int mid = (left + right) / 2;
//	left = mid - 2;
//	right = mid + 2;
//	while (right < sz)
//	{
//		printf("%s\n", arr);
//		arr[left] = '*';
//		arr[right] = '*';
//		left-=2;
//		right+=2;
//	}
//	printf("%s\n", arr);
//	left = 0;
//	right = sz - 1;
//	while (left <= right)
//	{
//		arr[left] = ' ';
//		arr[right] = ' ';
//		printf("%s\n", arr);
//		left+=2;
//		right-=2;
//	}
//	return 0;
//}
//
//int drink(int n,int m)
//{
//	
//	if ((n+m) > 2)
//	{
//		if ((n+m)%2==0)
//		{
//			int t = n + m;
//			t /= 2;
//			return t + drink(t-(t%2),t%2);
//		}
//		else
//		{
//			n /= 2;
//			return n + drink(n, m);
//		}
//		
//	}
//	else
//	{
//		return 1;
//	}
//	
//}
//
//int main()
//{
//	int n = 20;
//	int ret = drink(n-(n%2),n%2);
//	printf("ret=%d\n", ret+n);
//	return 0;
//}



//�ο���(�����ɲ鿴)
/*
˼·��
1. 20Ԫ���ȿ��Ժ�20ƿ����ʱ������20����ƿ��
2. ������ƿ�ӿ��Ժ�һƿ������֮�󣬿�ƿ��ʣ�ࣺempty/2(������ƿ�ӻ��ĺ���������ƿ��) + empty%2(��������ƿ��)
3. ���ƿ�Ӹ�������1�������Լ����������ظ�2
*/
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����1
//	total = money;
//	empty = money;
//	while (empty>1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//
//	return 0;
//}
//

int main()
{
	int arr[3][2] = { { 1, 2 },{3, 4},{5,6} };
	printf("arr=%p\n", arr);
	printf("arr+1=%p\n", arr + 1);
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 2; j++)
	//	{
	//		printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);
	//	}
	//}
	return 0;
}