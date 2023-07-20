#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: int value
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num = 0;

		while (num < n)
		{
			int j = 0;

			while (j < n)
			{
				if (j == num)
				{
					_putchar('\\');
				}
				else if (j < num)
				{
					_putchar(' ');
				}
			}
			j++;
			_putchar('\n');
		}
		num++;
	}
}
