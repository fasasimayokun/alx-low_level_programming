#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an int
 * @array: the array to search
 * @size: the num of elements in the arr
 * @cmp: pointer to the func to compare
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int nm;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (nm = 0; nm < size; nm++)
	{
		if (cmp(array[nm]))
		{
			return (nm);
		}
	}
	return (-1);
}
