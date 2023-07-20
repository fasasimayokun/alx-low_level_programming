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
		int col = 0;

		while (col <= 14)
		{
			if (col >= 10)
			{
				_putchar(49);
			}
			_putchar(col % 10 + 48);
			col++;
		}
		_putchar('\n');
	}
}
