#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: the least and starting integer
 * @max: the most and ending integer
 * Return: pointer to the newly created arr
 */
int *array_range(int min, int max)
{
	int nm, len;
	int *pt;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	pt = malloc(sizeof(int) * len);

	if (pt == NULL)
	{
		return (NULL);
	}

	for (nm = 0; min <= max; nm++)
	{
		pt[nm] = min++;
	}
	return (pt);
}
