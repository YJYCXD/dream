#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
////�Ƚ�N��0xaaaaaaaa��һ���ó�����λ��Ҳ���Ǹ�����λ��1��ż��λ��0
////�ٰ�N��0x55555555��һ���ó�ż��λ����ż����1��������0
////�������ֻ�������Ļ����߰�λ��ֻ�ܵõ�ԭ������
////���Ҫ�����Ļ���������ͼ���֣�Ҫ������λ�����ƶ�1λ��ż��λ�����ƶ�һλ
////�������߰�λ����ܴﵽ������Ŀ��
//#define SWAP(N) (((N & (0xaaaaaaaa))>>1) | ((N &(0x55555555))<<1))
//
//int main()
//{
//	int a = 10;
//	a = SWAP(a);
//	printf("%d\n", a);
//	return 0;
//}

//���ú�ʵ��offset����

#include <stddef.h>
//ʵ��offsetof����
//���ڽṹ���еı����ڴ洢��ʱ��Ҳ�ǰ��յ�ַ�洢�ģ������ʵ�ֵ�ʱ����Գ���ַ�ⷽ��ȥ��
//���԰ѵ�ַת����������Ȼ��Ԫ�صĵ�ַ���ʼ��ŵ�Ԫ�ص�ַ����Ϳ��Եõ�ƫ����
//���������Ƚ���ʵ�֣���Ϊ����ȥ���ǽṹ������ͣ�������һ������ı���
//��˿�����0��ַ����Ϊ�н飬��0��ַת��Ϊ�ṹ�����͵�ָ�������Ȼ���ҵ����еĽṹ���Ա������ת��Ϊint���ͼ���
//
//#define myoffsetof(SNAME, MNAME) (int)&((SNAME*)0->MNAME)
//struct S
//{
//	int a;
//	char b;
//	double d;
//};
//
//int main()
//{
//	struct S s = {1, 'a', 3.4};
//	printf("%d\n", offsetof(struct S, b));
//	return 0;
//}

//#define INT_PTR int*
//typedef int* int_ptr;	
//int main()
//{
//
//	INT_PTR a, b;
//	int_ptr c, d;
//	return 0;
//}

//����һ���� �ǵݼ�˳�� ������������� nums������ ÿ�����ֵ�ƽ�� ��ɵ������飬Ҫ��Ҳ�� �ǵݼ�˳�� ����

//�����������ð����������ʱ��ϳ�

//int* sortedSquares(int* nums, int numsSize, int* returnSize){
//	int* newArr = (int*)malloc(sizeof(int) * numsSize);
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		nums[i] = nums[i] * nums[i];
//		newArr[i] = nums[i];
//	}
//
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		for (j = 0; j < numsSize - i - 1; j++)
//		{
//			if (newArr[j] > newArr[j + 1])
//			{
//				flag = 1;
//				int t = newArr[j];
//				newArr[j] = newArr[j + 1];
//				newArr[j + 1] = t;
//			}
//		}
//
//		if (0 == flag)
//			break;
//	}
//
//	*returnSize = numsSize;
//	return newArr;
//}

//˫ָ��

int* sortedSquares(int* nums, int numsSize, int* returnSize){
	int* newArr = (int*)malloc(sizeof(int) * numsSize);
	int left = 0;
	int right = numsSize - 1;
	int pow1 = 0;
	int pow2 = 0;
	int i = numsSize - 1;
	//˫ָ�룺һ��ָ��0����һ��ָ��numsSize-1
	//������ָ��һ�����������һ���Ǹ������
	//�������бȽϣ��ŵ��������У����������������о�����������
	while (left <= right)
	{
		pow1 = nums[left] * nums[left];
		pow2 = nums[right] * nums[right];
		if (pow1 > pow2)
		{
			newArr[i] = pow1;
			left++;
		}
		else
		{
			newArr[i] = pow2;
			right--;
		}
		i--;
	}
	*returnSize = numsSize;
	return newArr;
}