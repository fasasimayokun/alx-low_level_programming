#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string argument
 * Return: void
 */
void print_rev(char *s)
{
	int rev;
	int str_len = 0;

	while (*s != '\0')
	{
		str_len += 1;
		s++;
	}
	s--;

	for (rev = str_len; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
