#include "search_algos.h"

/**
 * binary_search - a func that searches for a val in a sorted arr
 * of integers using the Binary search algorithm
 * @array: a ptr to the 1st elem of the arr to search
 * @size: the length of the given arr
 * @value: the value being looked for
 * Return: int the index where the val is found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t nm, lft, rht;

	if (array == NULL)
	{
		return (-1);
	}
	for (lft = 0, rht = size - 1; rht >= lft;)
	{
		printf("Searching in array: ");
		for (nm = lft; nm < rht; nm++)
		{
			printf("%d, ", array[nm]);
		}
		printf("%d\n", array[nm]);

		nm = lft + (rht - lft) / 2;
		if (array[nm] == value)
		{
			return (nm);
		}
		if (array[nm] > value)
			rht = nm - 1;
		else
			lft = nm + 1;
	}
	return (-1);
}
