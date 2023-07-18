#include "main.h"
/**
 * print_sign - a function that prints
 * the sign of a number.
 * @n: an ASCII code argument
 * Return: 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
