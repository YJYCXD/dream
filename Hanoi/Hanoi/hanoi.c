#define _CRT_SECURE_NO_WARNINGS 1



#include "hanoi.h"

void clear(int* arr)
{
	int i = 0;
	for (i = 0; i < SIZE; i++)
	{
		*(arr + i) = 0;
	}
}
void move2(int* arr1, int* arr2, int* arr3, int sum)
{
	int i = 0;
	for (i = 0; i < sum - 1; i++)
	{
		*(arr2 + i) = *(arr1 + i + 1);
	}
	*arr3 = *arr1;
}

void move1(int* arr1, int* arr2, int* arr3, int sum)
{

	int i = 0;
	for (i = 0; i < sum - 1; i++)
	{
		*(arr1 + i) = *(arr2 + i + 1);
	}
	*arr3 = *arr2;
}

void Hanoi(int* arr1, int* arr2, int* arr3, int sum)
{
	if (sum > 1)
	{

		if (*arr2 == 0)
		{
			move2(arr1, arr2, arr3, sum);
			clear(arr1);
			/*print(arr1);
			print(arr2);
			print(arr3);*/
			Hanoi(arr1, arr2, arr3 + 1, sum - 1);
		}
		else if (*arr1 == 0)
		{
			move1(arr1, arr2, arr3, sum);
			clear(arr2);
			/*print(arr1);
			print(arr2);
			print(arr3);*/
			Hanoi(arr1, arr2, arr3 + 1, sum - 1);
		}
	}
	else
	{
		if (*arr1 != 0)
		{
			*arr3 = *arr1;
			clear(arr1);
		}
		else if (*arr2 != 0)
		{
			*arr3 = *arr2;
			clear(arr2);
		}
	}
}