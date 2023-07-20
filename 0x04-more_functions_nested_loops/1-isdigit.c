#include "main.h"
/**
 * _isdigit - checks for a digit (0-9)
 * @c: an integer argument
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
