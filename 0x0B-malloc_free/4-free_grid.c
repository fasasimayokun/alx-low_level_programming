#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees memory of 2dimensional arr
 * @grid: input argument
 * @height: input argument
 * Return: void (nothing)
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
