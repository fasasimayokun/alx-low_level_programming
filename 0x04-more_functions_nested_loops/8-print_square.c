#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: int values
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
