#include "main.h"
/**
 * print_alphabet - a function that prints lowercase
 * alphabets
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
