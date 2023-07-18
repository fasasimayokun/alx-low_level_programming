#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: an ASCII code argument
 * Return: 0 (success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c < 90)
	{
		return (1);
	}
	else if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
