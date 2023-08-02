#include "main.h"
/**
 * factorial - a func that return the factorial of a num
 * @n: int value
 * Return: factorial of the given num
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
