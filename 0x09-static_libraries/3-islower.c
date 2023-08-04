#include "main.h"
/**
 * _islower - a function that prints 10 times the alphabet, in lowercase
 * @c: an argument which is an ASCII code
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
