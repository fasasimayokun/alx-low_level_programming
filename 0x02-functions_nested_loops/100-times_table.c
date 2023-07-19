#include "main.h"
/**
 * print_times_table - prints the n times table,
 * starting with 0
 * @x: number of times table
 * Return: void
 */
void print_times_table(int x)
{
	int a, b, c;

	if (x >= 0 && x <= 15)
	{
		for (a = 0; a <= x; a++)
		{
			_putchar(48);
			for (b = 1; b <= x; b++)
			{
				_putchar(',');
				_putchar(' ');
				c = a * b;
				if (c <= 99)
				{
					_putchar(' ');
				}
				if (c <= 9)
				{
					_putchar(' ');
				}
				if (c >= 100)
				{
					_putchar((c / 100) + 48);
					_putchar(((c / 10) % 10) + 48);
				}
				else if (c <= 99 && c >= 10)
				{
					_putchar((c / 10) + 48);
				}
				_putchar((c % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
