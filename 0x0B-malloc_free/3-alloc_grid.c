#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that returns
 * a pointer to a 2 dimensional arr of ints
 * @width: width size
 * @height: height input size
 * Return: pointer to 2 dimension arr
 */
int **alloc_grid(int width, int height)
{
	int x, y = 0;
	int **dim_arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim_arr = malloc(sizeof(int *) * height);

	if (dim_arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		dim_arr[x] = malloc(sizeof(int) * width);

		if (dim_arr[x] == NULL)
		{
			for (; x >= 0; x++)
				free(dim_arr[x]);

			free(dim_arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dim_arr[x][y] = 0;
	}

	return (dim_arr);
}
