#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ��Strstr����

//int strStr(char * haystack, char * needle){
//	int strnum = 0;
//	int sstrnum = 0;
//	int num = 0;
//	if (!(*needle))
//		return 0;
//	while (haystack[strnum])
//	{
//		num = strnum;
//		if (haystack[num] == needle[sstrnum])
//		{
//			while (haystack[num] == needle[sstrnum] && needle[sstrnum])
//			{
//				num++;
//				sstrnum++;
//			}
//			if (needle[sstrnum] == '\0')
//				return strnum;
//			else
//				sstrnum = 0;
//		}
//		strnum++;
//	}
//	return -1;
//}


//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
//���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

//int searchInsert(int* nums, int numsSize, int target){
//	int left = 0;
//	int right = numsSize - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		//mid = (left + right) / 2;//ֱ���üӷ������ϴ��ʱ��ᵼ�����
//		mid = ((right - left) >> 1) + left;//�����������
//		if (nums[mid] > target)
//		{
//			right = mid - 1;
//		}
//		else if (nums[mid] < target)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (nums[mid] > target)
//		return mid;
//	else
//		return (mid + 1);
//}


//���ŵĽⷨ
int searchInsert(int* nums, int numsSize, int target) {
	int left = 0, right = numsSize - 1, ans = numsSize;
	while (left <= right) {
		int mid = ((right - left) >> 1) + left;
		if (target <= nums[mid]) {
			ans = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return ans;
}

