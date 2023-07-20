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
		int num, i;

		for (num = 0; num < n; num++)
		{
			for (i = 0; i < n; i++)
			{
				if (i == num)
				{
					_putchar('\\');
				}
				else if (j < num)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
