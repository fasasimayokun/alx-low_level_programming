#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9 except 2 & 4
 * Return: void
 */
void print_most_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		if (num == 50 || num == 52)
		{
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
