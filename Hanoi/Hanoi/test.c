#define _CRT_SECURE_NO_WARNINGS 1
#include "hanoi.h"

int main()
{
	int i = 0;
	int arr1[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int arr2[SIZE] = { 0 };
	int arr3[SIZE] = { 0 };
	Hanoi(arr1, arr2, arr3,SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
	return 0;
}