#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现Strstr函数

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


//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
//如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

//int searchInsert(int* nums, int numsSize, int target){
//	int left = 0;
//	int right = numsSize - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		//mid = (left + right) / 2;//直接用加法在数较大的时候会导致溢出
//		mid = ((right - left) >> 1) + left;//这样不会溢出
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


//更优的解法
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

