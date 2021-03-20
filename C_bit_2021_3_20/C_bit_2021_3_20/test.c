#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//##所连接的两个符号必须产生合法的标识符，也就是说连接之后的符号必须是定义过的

//#define ADD(STR, VALUE) sum##STR  += VALUE;
//int main()
//{
//	int sum1 = 0;
//	ADD(1, 10);
//	printf("%d\n", sum1);
//	return 0;
//}


//带副作用的宏参数
//如下：

//#define COMPARE(X, Y) (X) > (Y) ? (X) : (Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//在给宏传参的时候，传了带有副作用的宏参数
//	//宏进行替换的时候是不会计算的，而是直接替换进去
//	//也就是 (a++) > (b++) ? (a++) : (b++)
//	//所以得到的结果是b++之后的值
//	//并且得到结果之后，b还会再次加加，这就是宏参数的副作用
//	printf("%d\n", COMPARE(a++, b++));
//	return 0;
//}


//undef指令用于移除一个定义

//#define MAX 100

//int main()
//{
//#undef MAX//使上面定义的MAX失效
//	printf("%d\n", MAX);
//	return 0;
//}


//#define MAX 100
//int main()
//{
//	int a = 10;
////#if MAX
////	printf("hehe\n");
////#endif
//
////#if 1-1
////	printf("hha\n");
////#elif 2-2
////	printf("hehe\n");
////#else
////	printf("hhh\n");
////#endif
//
////#ifdef MAX
////	printf("%d", MAX);
////#endif
//
////#if !defined(MAX)
////	printf("%d\n", 100);
////#endif
//
////#ifndef MAX
////	printf("%d\n", 100);
////#endif
//
//		
//	return 0;
//}
//

/**
* Return an array of arrays of size *returnSize.
* The sizes of the arrays are returned as *returnColumnSizes array.
* Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
*/
//int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes){
//	int m = matrixSize;
//	int n = matrixColSize[0];
//	//用malloc申请一个二维数组
//	int** p = (int**)malloc(sizeof(int*) * n);//先申请一个二级指针，里面包括一个有n个一级指针大小的长度
//	*returnColumnSizes = (int*)malloc(sizeof(int) * n);
//	*returnSize = n;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		p[i] = (int*)malloc(sizeof(int) * m);//每个一级指针中又包括m个int整形
//		(*returnColumnSizes)[i] = m;//returnColumnSizes参数的意思是返回整个转置矩阵的构成，比如2*3的矩阵，转置之后就是3*2
//		//因此返回的二级指针中有3个int，每个int赋值为2
//	}
//	for (i = 0; i < matrixSize; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			p[j][i] = matrix[i][j];//matrix和p矩阵的行数和列数刚好是相反的，因此在赋值的时候应该反过来
//		}
//	}
//	return p;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	char str[20] = "cxd";
//	char list[20] = " ";
//	fwrite(str, sizeof(char), 3, pf);
//	fread(list, sizeof(char), 3, pf);
//	printf("%s\n", list);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE * pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}


//数组中占比超过一半的元素称之为主要元素。给定一个整数数组，找到它的主要元素。若没有，返回-1。


//这个方法的复杂度是n^2，在最后一个测试用例的时候会超出时间限制
int majorityElement(int* nums, int numsSize){
	int cur = 0;
	int next = 0;
	int max = 0;
	int num = 0;
	int sum = 1;
	while (cur < numsSize)
	{
		next = cur + 1;
		sum = 1;
		while (next < numsSize)
		{
			if (nums[cur] == nums[next])
				sum++;
			next++;
		}
		if (sum > max)
		{
			max = sum;
			num = nums[cur];
		}
		cur++;
	}
	if (max <= (numsSize / 2))
		return -1;
	return num;
}


//从题解中看到一个摩尔投票法
//大概思路就是主要元素的数量会超过数组长度的一半，因此设计一个计数器
//当计数器为0的时候，用一个变量t等于当前数，然后计数器加一，往后遍历，如果遇到的数与当前数不同计数器减一
//这个思想的核心就是主要元素的数量在遍历完所有元素的时候一定不是0

int majorityElement(int* nums, int numsSize){
	int count = 0;
	int t = 0;
	int cur = 0;
	while (cur < numsSize)
	{
		if (count == 0)
			t = nums[cur];
		if (t == nums[cur])
			count++;
		else
			count--;

		cur++;
	}
	//但是如果数组中没有主要元素的话，count也会是1，这就需要再对数组进行一次遍历，确认t所对应的元素是不是主要元素
	count = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == t)
			count++;
	}
	if (count <= (numsSize / 2))
		return -1;
	return t;
}