#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//���ַ���
//1.���û��Ҫ����ԭ�ַ����Ͻ����滻���Ϳ����¶���һ��������������ַ���
//2.���Ҫ����ԭ�ַ��������滻����ǰ�����滻�Ļ�һ���Ḳ�Ǻ�����ַ�������ô�϶��ǴӺ���ǰ�����滻

//��һ��

//char* Turn_space(char* arr,char* str)
//{
//	while (*arr)
//	{
//		if (*arr == ' ')
//		{
//			*str = '%';
//			*(str + 1) = '2';
//			*(str + 2) = '0';
//			str = str + 3;
//		}
//		else
//		{
//			*str = *arr;
//			str++;
//		}
//		arr++;
//	}
//	return str;
//}




//
//
//int main()
//{
//	char arr[] = "abc  def ghi kj";
//	char str[50] = { 0 };
//	Turn_space1(arr,str);
//	printf("%s\n", str);
//	return 0;
//}


//�ڶ���


//void Turn_space2(char* arr,int sz,int count)
//{
//	char* p1 = arr + sz - 1;
//	char* p2 = arr + sz - 1 + count * 2;
//	while (p1 != p2)
//	{
//		if (*p1!=' ')
//		{
//			*p2 = *p1;
//			p2--;
//		}
//		else
//		{
//			*p2 = '0';
//			*(p2 - 1) = '2';
//			*(p2 - 2) = '%';
//			p2 = p2 - 3;
//		}
//		p1--;
//	}
//}
//
//int main()
//{
//	char arr[50] = "abc dgf ju ki";
//	int sz = strlen(arr);
//	int count = 0;
//	int i = 0;
//	while (arr[i])
//	{
//		if (arr[i] == ' ')
//			count++;
//		i++;
//	}
//	Turn_space2(arr,sz,count);
//	printf("%s\n", arr);
//	return 0;
//}



//int main()
//{
//	double** a[3][4];
//	printf("%d\n", sizeof(a));
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char achello[] = "hello\0world";
//	char acnew[15] = { 0 };
//	strcpy(acnew, achello);
//	printf("%d %d\n", strlen(acnew), sizeof(achello));
//	return 0;
//}
//
//int Feb(int n)
//{
//	int a = 1;
//	int b = 1;
//	int ret = 1;
//	while (n > 2)
//	{
//		ret = a + b;
//		a = b;
//		b = ret;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Feb(n);
//	printf("%d\n", ret);
//	return 0;
//}



//����һ����������Ҫ��õ��ø������ĸ�λ����

//#include <stdio.h>
//int main()
//{
//	double a = 0.0;
//	scanf("%lf", &a);
//	printf("%d", (int)a % 10);//ȡ�ø�λ����ǿ������ת��Ϊint����С��������
//	return 0;
//}


//һ��Լ��3.156��107s��Ҫ�������������䣬��ʾ������϶����롣
//���⿼�����ε���ֵ��Χ

//
//#include <stdio.h>
//int main()
//{
//	int age = 0;
//	long ret = 0;
//	scanf("%d", &age);
//	ret = age * 31560000;
//	printf("%ld\n", ret);
//	return 0;
//}


//��������seconds(0< seconds < 100, 000, 000)������ת����Сʱ�����Ӻ��롣

//#include <stdio.h>
//int main()
//{
//	/*int second=0;
//	int hour=0;
//	int minute=0;
//	scanf("%d",&second);
//	hour=second/3600;
//	minute=(second-hour*3600)/60;
//	second=second-hour*3600-minute*60;
//	printf("%d %d %d\n",hour,minute,second);*/
//	int seconds, h, m, s;
//	scanf("%d", &seconds);
//	h = seconds / 3600;//�õ�Сʱ��
//	m = (seconds % 3600) / 60;//ģ��3600�õ���ȥСʱʣ�������������60�͵õ�����
//	s = (seconds % 3600) % 60;//ģ��3600�õ�ʣ�����������ģ��60�õ���ȥ����ʣ�������
//	printf("%d %d %d", h, m, s);
//	return 0;
//}


//����BMIָ������������ָ����
//#include <stdio.h>
//int main()
//{
//	int weight = 0;
//	int length = 0;
//	double BMI = 0.0;
//	scanf("%d %d", &weight, &length);
//	//BMI = (double)weight / (length*length)*10000;//���������Ϊ0����Ϊweight��length�������Σ�����Ž��������л���ִ���
//	                                             //���������������һ������Ϊdouble����
//	                                             //����lengthҪ��������Ϊ��λ�����Գ���100.f
//	BMI = weight / ((length / 100.f)*(length / 100.f));
//	printf("%.2lf\n", BMI);
//	return 0;
//}



//����һ������İ뾶��������������������������ʽΪ V = 4/3*��r3������ ��= 3.1415926��

//#include <stdio.h>
//int main()
//{
//	double r = 0.0;
//	scanf("%lf", &r);
//	printf("%.3f\n", 4 * 3.1415926*r*r*r / 3);
//	return 0;
//}


//���ÿ�����������Ӧ��Сд��ĸ��

#include <stdio.h>
#include <string.h>
int main()
{
	char ch = 0;
	while (~(ch = getchar()))

		getchar();//���û�����getchar�Ļ����������ʱ��س�Ҳ����ĸ��ͬ�������ת�������½������
	              //����Ҫ��geicgar����������Ļ���
		printf("%c\n", tolower(ch));
	}
	return 0;
}