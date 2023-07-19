#include "main.h"
/**
 * print_last_digit - a function that prints
 * the last digit of a number
 * @n: an integer argument
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int lastNum;

	lastNum = n % 10;
	if (lastNum < 0)
	{
		lastNum = -1 * lastNum:
	}
	_putchar(lastNum + 48);
	return (lastNum);
}
