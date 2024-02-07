#include "search_algos.h"

/**
 * linear_search - a func that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: an addrs that points the 1st elem of the array to search
 * @size: the number of items in the arr
 * @value: the value bein looked for
 * Return: an int the 1st index of the value else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t nm;

	if (array == NULL)
	{
		return (-1);
	}

	for (nm = 0; nm < size; nm++)
	{
		printf("Value checked array[%ld] = [%d]\n", nm, array[nm]);
		if (array[nm] == value)
		{
			return (nm);
		}
	}

	return (-1);
}
