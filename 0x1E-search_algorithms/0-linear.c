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

	for (nm = 0; (nm < size) && (array); nm++)
	{
		if (*(array + nm) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)nm, *(array + nm));
			return (nm);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)nm, *(array + nm));
		}
	}
	return (-1);
}
