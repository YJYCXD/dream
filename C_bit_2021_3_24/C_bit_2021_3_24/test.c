#define _CRT_SECURE_NO_WARNINGS 1


//����һ���������� nums �����������ҳ�����������ɵ����˻������������˻���

#include <stdio.h>
//int maximumProduct(int* nums, int numsSize){
//	//�ҵ������е����˻�
//	//��ֻҪ�ҵ�����������������������С���������������������
//	//Ȼ��Ƚ����ߵĳ˻�
//	int min1 = INT_MAX;//��С����,��ʼֵΪint�����ֵ�������ʼ��Ϊ0�Ļ������������ȫ�Ǹ����ͻ���ִ���
//	int min2 = INT_MAX;//�ڶ�С����
//	int max1 = INT_MIN;//����������ʼ��Ϊint����Сֵ�������ʼ��Ϊ0��ȫ�Ǹ�����ʱ�����ͻ�ʼ��δΪ0
//	int max2 = INT_MIN;//�δ����
//	int max3 = INT_MIN;//��������������С����
//	int i = 0;
//	int ans = 0;
//	if (numsSize == 3)
//		return nums[0] * nums[1] * nums[2];
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] <= min1)
//		{
//			min2 = min1;
//			min1 = nums[i];
//		}
//		else if (nums[i] < min2)
//		{
//			min2 = nums[i];
//		}
//		if (nums[i] >= max1)
//		{
//			max3 = max2;
//			max2 = max1;
//			max1 = nums[i];
//		}
//		else if (nums[i] > max2)
//		{
//			max3 = max2;
//			max2 = nums[i];
//		}
//		else if (nums[i] > max3)
//		{
//			max3 = nums[i];
//		}
//		printf("%d %d %d %d %d\n", min1, min2, max1, max2, max3);
//	}
//	ans = (min1*min2*max1)>(max1*max2*max3) ? (min1*min2*max1) : (max1*max2*max3);
//	return ans;
//}

//����һ���������� arr�������ж��������Ƿ������������Ԫ�ض��������������������ڣ��뷵�� true �����򣬷��� false ��

bool threeConsecutiveOdds(int* arr, int arrSize){
	if (arrSize < 3)
		return false;
	int cur = 0;
	int head = 0;
	int count = 0;
	while ((cur < arrSize) && (head < arrSize))
	{
		head = cur;
		count = 0;
		if (arr[cur] % 2 == 1)
		{
			while ((count < 3) && (cur < arrSize))
			{
				if ((arr[cur] % 2) == 0)
					break;
				++cur;
				count++;
				printf("%d\n", cur);
			}
			if (count == 3)
				return true;
		}
		cur = head + 1;
	}
	return false;
}