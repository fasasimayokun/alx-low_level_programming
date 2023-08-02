#include "main.h"

int _real_sqrt_recursion(int n, int it);
/**
 * _sqrt_recursion - a function that returns the natural squrt of a num
 * @n: the input valu to find the sqrt of
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_real_sqrt_recursion(n, 0));
}
/**
 * _real_sqrt_recursion - recurse to find the natural
 * sqrt of the number
 * @n: num to find the sqrt
 * @it: iterator times
 * Return: the result
 */
int _real_sqrt_recursion(int n, int it)
{
	if (it * it > n)
	{
		return (-1);
	}
	else if (it * it == n)
	{
		return (it);
	}
	return (_real_sqrt_recursion(n, it + 1));
}
