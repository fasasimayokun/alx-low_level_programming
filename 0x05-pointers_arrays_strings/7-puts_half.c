#include "main.h"
/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: string argument
 * Return: void
 */
void puts_half(char *str)
{
	int ful_str, half_str;

	ful_str = 0;

	while (str[ful_str] != '\0')
	{
		ful_str++;
	}

	half_str = ful_str / 2;

	if (ful_str % 2 == 1)
		half_str++;

	while (half_str < ful_str)
	{
		_putchar(str[half_str]);
		half_str++;
	}
	_putchar('\n');
}
