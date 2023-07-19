#include "main.h"
/**
 * print_last_digit - a function that prints
 * the last digit of a number
 * @n: an integer argument
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + 48);
	return (n % 10);
}
