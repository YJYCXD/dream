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
	//升序
	return *((int*)e1) - *((int*)e2);//因为e1和e2类型是void*，没有具体的类型，在使用的时候要进行强制转换为相应的类型
	//降序
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
//	//void *base,  //第一个参数是目标数组的起始位置，也就是首地址
//	//size_t num, //size_t指的是unsigned int,第二个参数是数组的长度
//	//size_t width, //第三个参数是一个元素的宽度，也就是在内存中占多少字节
//	//int(__cdecl *compare)(const void *elem1, const void *elem2)
//	//第四个参数是最关键的，是用来比较的函数地址，用函数指针作为参数，通过指定的比较函数的地址来完成排序
//	qsort(arr, sz1, sizeof(arr[0]), cmp_int);//这里的最后一个参数的设计要和qsort函数中的参数和返回类型相同
//	qsort(arr1, sz2, sizeof(arr1[0]), cmp_struct);
//	print1(arr,sz1);
//	print2(arr1);
//	return 0;
//}


//模拟实现qsort函数，但是现在只会冒泡排序来实现各个类型的排序

void _Swap(char* byte1, char* byte2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char t = *byte1;
		*byte1 = *byte2;
		*byte2 = t;
		//每次循环完一定要加一，不然会出错
		byte1++;
		byte2++;
	}
}


void my_qsort(void* start, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	//内部用的是冒泡排序，其基本思想是不变的，只是可以改变不同排序的类型，用函数指针和回调函数来完成

	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//先对每个元素进行判断，用大于0、等于0、小于0来判断元素的大小
			//返回值大于0就交换
			//e1和e2是void*类型，可以通过将其转化为char*，再加上数据类型的宽度来找到每一个元素的地址
			if (cmp((char*)start + j*width, (char*)start + (j+1)*width)>0)
			{
				//由于把start转化为char*类型，因此每次只能访问一个字节，所以可以一个字节一个字节进行交换
				//所以把元素的宽度传过去
				//这里不能再Swap函数的内部强制类型转换是因为这个Swap函数应该是一个通用的函数
				//强制类型转换之后就缺乏适用性
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
