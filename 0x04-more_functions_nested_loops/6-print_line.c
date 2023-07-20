#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: int value
 * Return: void
 */
void print_line(int n)
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
				_putchar('_');
				num++;
			}
			_putchar('\n');
		}
}
