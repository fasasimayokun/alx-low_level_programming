#include "main.h"
/**
 * _pow_recursion - a func that returns the val of x raised to the pow of y.
 * @x: int val one
 * @y: the int val to raise x by
 * Return: the resulting valu
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
