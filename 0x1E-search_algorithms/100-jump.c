#include "search_algos.h"

/**
 * jump_search - a func that searches for a value in a sorted arr
 * of integers using the Jump search algorithm
 * @array: the ptr to the 1st elem of the arr to search
 * @size: the number of items present in the arr
 * @value: the value being looked for
 * Return: the 1st index where the value is found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t nm, jp, step;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = sqrt(size);
	for (nm = jp = 0; jp < size && array[jp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jp, array[jp]);
		nm = jp;
		jp = jp + step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", nm, jp);

	jp = jp < size - 1 ? jp : size - 1;

	for (; nm < jp && array[nm] < value; nm++)
	{
		printf("Value checked array[%ld] = [%d]\n", nm, array[nm]);
	}
	printf("Value checked array[%ld] = [%d]\n", nm, array[nm]);
	return (array[nm] == value ? (int)nm : -1);
}
