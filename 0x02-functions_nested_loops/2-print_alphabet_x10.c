#include "main.h"
/**
 * print_alphabet_x10 - a function that prints
 * 10 times the alphabet, in lowercase
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int row = 0;

	while (row < 10)
	{
		int alpha = 97;

		while (alpha < 123)
		{
			_putchar(alpha);
			alpha++;
		}
		row++;
		_putchar('\n');
	}
}
