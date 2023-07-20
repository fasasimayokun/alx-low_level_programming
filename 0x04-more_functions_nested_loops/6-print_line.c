#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: int value
 * Return: void
 */
void print_line(int n)
{
	int num = 0;

	while (num < n)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
		num++;
	}
}
