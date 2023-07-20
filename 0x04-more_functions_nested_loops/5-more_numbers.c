#include "main.h"
/**
 * more_numbers - a function that prints 10 times
 * the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int row = 0;

	while (row < 10)
	{
		char col = '0';

		while (col <= '14')
		{
			_putchar(col);
			col++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
