#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - prints a positive &
 * negative number
 * @n: a -ve or +ve number
 * Return: +ve 0r -ve number
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
