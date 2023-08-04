#include "main.h"
/**
 * _abs - a function that computes
 * the absolute value of an integer.
 * @i: an signed integer argument
 * Return: absolute value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
