#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//##�����ӵ��������ű�������Ϸ��ı�ʶ����Ҳ����˵����֮��ķ��ű����Ƕ������

//#define ADD(STR, VALUE) sum##STR  += VALUE;
//int main()
//{
//	int sum1 = 0;
//	ADD(1, 10);
//	printf("%d\n", sum1);
//	return 0;
//}


//�������õĺ����
//���£�

//#define COMPARE(X, Y) (X) > (Y) ? (X) : (Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�ڸ��괫�ε�ʱ�򣬴��˴��и����õĺ����
//	//������滻��ʱ���ǲ������ģ�����ֱ���滻��ȥ
//	//Ҳ���� (a++) > (b++) ? (a++) : (b++)
//	//���Եõ��Ľ����b++֮���ֵ
//	//���ҵõ����֮��b�����ٴμӼӣ�����Ǻ�����ĸ�����
//	printf("%d\n", COMPARE(a++, b++));
//	return 0;
//}


//undefָ�������Ƴ�һ������

//#define MAX 100

//int main()
//{
//#undef MAX//ʹ���涨���MAXʧЧ
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
//	//��malloc����һ����ά����
//	int** p = (int**)malloc(sizeof(int*) * n);//������һ������ָ�룬�������һ����n��һ��ָ���С�ĳ���
//	*returnColumnSizes = (int*)malloc(sizeof(int) * n);
//	*returnSize = n;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		p[i] = (int*)malloc(sizeof(int) * m);//ÿ��һ��ָ�����ְ���m��int����
//		(*returnColumnSizes)[i] = m;//returnColumnSizes��������˼�Ƿ�������ת�þ���Ĺ��ɣ�����2*3�ľ���ת��֮�����3*2
//		//��˷��صĶ���ָ������3��int��ÿ��int��ֵΪ2
//	}
//	for (i = 0; i < matrixSize; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			p[j][i] = matrix[i][j];//matrix��p����������������պ����෴�ģ�����ڸ�ֵ��ʱ��Ӧ�÷�����
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


//������ռ�ȳ���һ���Ԫ�س�֮Ϊ��ҪԪ�ء�����һ���������飬�ҵ�������ҪԪ�ء���û�У�����-1��


//��������ĸ��Ӷ���n^2�������һ������������ʱ��ᳬ��ʱ������
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


//������п���һ��Ħ��ͶƱ��
//���˼·������ҪԪ�ص������ᳬ�����鳤�ȵ�һ�룬������һ��������
//��������Ϊ0��ʱ����һ������t���ڵ�ǰ����Ȼ���������һ�����������������������뵱ǰ����ͬ��������һ
//���˼��ĺ��ľ�����ҪԪ�ص������ڱ���������Ԫ�ص�ʱ��һ������0

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
	//�������������û����ҪԪ�صĻ���countҲ����1�������Ҫ�ٶ��������һ�α�����ȷ��t����Ӧ��Ԫ���ǲ�����ҪԪ��
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