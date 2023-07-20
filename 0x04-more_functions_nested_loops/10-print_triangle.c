#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: int value
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (int i = 1; i <= size; i++)
		{
			for (int j = i; j > size; j++)
			{
				_putchar(' ');
			}
			for (int j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
