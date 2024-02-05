#include "search_algos.h"

/**
 * interpolation_search - a func that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: the ptr to the 1st elem of the array to search
 * @size: the length of the given array
 * @value: the value being searched for
 * Return: the 1st index where the value is located else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t nm, lf, rt;

	if (array == NULL)
	{
		return (-1);
	}

	for (lf = 0, rt = size - 1; rt >= lf;)
	{
		nm = lf + (((double)(rt - lf) / (array[rt] - array[lf]))
				* (value - array[lf]));
		if (nm < size)
		{
			printf("Value checked array[%ld] = [%d]\n", nm, array[nm]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", nm);
			break;
		}

		if (array[nm] == value)
			return (nm);
		if (array[nm] > value)
		{
			rt = nm - 1;
		}
		else
			lf = nm + 1;
	}
	return (-1);
}
