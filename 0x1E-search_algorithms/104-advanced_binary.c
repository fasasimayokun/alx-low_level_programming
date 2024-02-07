#include "search_algos.h"

/**
 * advanced_binary_recursive_func - a function that searches recursively
 * for a value in a sorted arr of integers using binary search
 * @array: the ptr to the 1st elem of the sub array to search
 * @lft: the starting index of the sub array to search
 * @rht: the ending index of the sub array to search
 * @value: the val being searched for
 * Return: the index where the vlue is located else -1
 */
int advanced_binary_recursive_func(int *array, size_t lft,
		size_t rht, int value)
{
	size_t nm;

	if (rht < lft)
	{
		return (-1);
	}

	printf("Searching in array: ");
	for (nm = lft; nm < rht; nm++)
	{
		printf("%d, ", array[nm]);
	}
	printf("%d\n", array[nm]);

	nm = lft + (rht - lft) / 2;
	if (array[nm] == value && (nm == lft || array[nm - 1] != value))
		return (nm);
	if (array[nm] >= value)
	{
		return (advanced_binary_recursive_func(array, lft, nm, value));
	}
	return (advanced_binary_recursive_func(array, nm + 1, rht, value));
}

/**
  * advanced_binary - a func that searches for a value in a sorted array
  * of integers using advanced binary search.
  * @array: the ptr to the 1st element of the array to search.
  * @size: The number of items in the array.
  * @value: The value to search for.
  *
  * Return: the 1st index where the value is located else -1
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	return (advanced_binary_recursive_func(array, 0, size - 1, value));
}
