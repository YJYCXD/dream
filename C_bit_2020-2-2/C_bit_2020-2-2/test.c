#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
struct Stu
{
	char name[20];
	int age;
	char sex[5];
};
//
void print1(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

void print2(struct Stu* arr)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", (arr+i)->name);
	}
}
//
int cmp_int(const void* e1, const void* e2)
{
	//����
	return *((int*)e1) - *((int*)e2);//��Ϊe1��e2������void*��û�о�������ͣ���ʹ�õ�ʱ��Ҫ����ǿ��ת��Ϊ��Ӧ������
	//����
	/*return *(int*)e2 - *(int*)e1;*/
}

int cmp_struct(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
//int main()
//{
//	int arr[] = { 3, 5, 7, 1, 2, 9, 8, 7, 6, 10 };
//	struct Stu arr1[3] = { { "cxd", 22, "nan" }, { "yjy", 22, "nv" }, { "sm", 45, "nv" } };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	int sz2 = sizeof(arr1) / sizeof(arr1[0]);
//	//void *base,  //��һ��������Ŀ���������ʼλ�ã�Ҳ�����׵�ַ
//	//size_t num, //size_tָ����unsigned int,�ڶ�������������ĳ���
//	//size_t width, //������������һ��Ԫ�صĿ�ȣ�Ҳ�������ڴ���ռ�����ֽ�
//	//int(__cdecl *compare)(const void *elem1, const void *elem2)
//	//���ĸ���������ؼ��ģ��������Ƚϵĺ�����ַ���ú���ָ����Ϊ������ͨ��ָ���ıȽϺ����ĵ�ַ���������
//	qsort(arr, sz1, sizeof(arr[0]), cmp_int);//��������һ�����������Ҫ��qsort�����еĲ����ͷ���������ͬ
//	qsort(arr1, sz2, sizeof(arr1[0]), cmp_struct);
//	print1(arr,sz1);
//	print2(arr1);
//	return 0;
//}


//ģ��ʵ��qsort��������������ֻ��ð��������ʵ�ָ������͵�����

void _Swap(char* byte1, char* byte2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char t = *byte1;
		*byte1 = *byte2;
		*byte2 = t;
		//ÿ��ѭ����һ��Ҫ��һ����Ȼ�����
		byte1++;
		byte2++;
	}
}


void my_qsort(void* start, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	//�ڲ��õ���ð�����������˼���ǲ���ģ�ֻ�ǿ��Ըı䲻ͬ��������ͣ��ú���ָ��ͻص����������

	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//�ȶ�ÿ��Ԫ�ؽ����жϣ��ô���0������0��С��0���ж�Ԫ�صĴ�С
			//����ֵ����0�ͽ���
			//e1��e2��void*���ͣ�����ͨ������ת��Ϊchar*���ټ����������͵Ŀ�����ҵ�ÿһ��Ԫ�صĵ�ַ
			if (cmp((char*)start + j*width, (char*)start + (j+1)*width)>0)
			{
				//���ڰ�startת��Ϊchar*���ͣ����ÿ��ֻ�ܷ���һ���ֽڣ����Կ���һ���ֽ�һ���ֽڽ��н���
				//���԰�Ԫ�صĿ�ȴ���ȥ
				//���ﲻ����Swap�������ڲ�ǿ������ת������Ϊ���Swap����Ӧ����һ��ͨ�õĺ���
				//ǿ������ת��֮���ȱ��������
				_Swap((char*)start + j*width, (char*)start + (j+1)*width, width);
			}
		}
	}
}
int main()
{
	int arr[] = { 3, 5, 7, 1, 2, 9, 8, 7, 6, 10 };
	struct Stu arr1[3] = { { "cxd", 52, "nan" }, { "yjy", 22, "nv" }, { "sm", 45, "nv" } };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	int sz2 = sizeof(arr1) / sizeof(arr1[0]);
	my_qsort(arr, sz1, sizeof(arr[0]), cmp_int);
	my_qsort(arr1, sz2, sizeof(arr1[0]), cmp_struct);
	print1(arr,sz1);
	print2(arr1);
	return 0;
}
