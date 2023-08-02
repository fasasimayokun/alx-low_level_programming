#include "main.h"
int _check_prime(int n, int it);
/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: input val
 * Return: int val
 */


int is_prime_number(int n)
{
	return (_check_prime(n, 1));
}
/**
 * _check_prime - check for prime num
 * @n: num to be checked
 * @it: the iteration number
 * Return: int val
 */
int _check_prime(int n, int it)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % it == 0 && it > 1)
	{
		return (0);
	}
	else if ((n / it) < it)
	{
		return (1);
	}
	return (_check_prime(n, it + 1));
}
