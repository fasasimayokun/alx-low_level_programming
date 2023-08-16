#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an arr
 * @array: the arr
 * @size:  size of the arr
 * @action: is a pointer to the function you need to use
 * Return: nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int num;

	if (array == NULL || action == NULL)
		return;

	for (num = 0; num < size; num++)
	{
		action(array[num]);
	}
}
