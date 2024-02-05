#include "search_algos.h"

/**
 * _binary_search_ - a func that searches for a val in a sorted array of
 * integers using binary search
 * @array: the ptr to the 1st elem of the array to search
 * @lft: the starting index of the sub arr to search
 * @rht: the ending index of the sub arr to search
 * @value: the value to search
 * Return: the index where the value is located else -1
 */
int _binary_search_(int *array, size_t lft, size_t rht, int value)
{
	size_t nm;

	if (array == NULL)
	{
		return (-1);
	}

	while (rht >= lft)
	{
		printf("Searching in array: ");
		for (nm = lft; nm < rht; nm++)
			printf("%d, ", array[nm]);
		printf("%d\n", array[nm]);

		nm = lft + (rht - lft) / 2;
		if (array[nm] == value)
			return (nm);
		if (array[nm] > value)
		{
			rht = nm - 1;
		}
		else
			lft = nm + 1;
	}
	return (-1);
}

/**
 * exponential_search - a func that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: the pointer to the 1st elem of the array to search
 * @size: the length of the given array
 * @value: the value being looked for
 * Return: the index where the val is located else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t nm = 0, rht;

	if (array == NULL)
	{
		return (-1);
	}
	if (array[0] != value)
	{
		for (nm = 1; nm < size && array[nm] <= value; nm = nm * 2)
		{
			printf("Value checked array[%ld] = [%d]\n", nm, array[nm]);
		}
	}
	rht = nm < size ? nm : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", nm / 2, rht);
	return (_binary_search_(array, nm / 2, rht, value));
}
