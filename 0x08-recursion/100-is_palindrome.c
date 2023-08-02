#include "main.h"

int its_pal(char *s, int it, int count);
int _strlen_recursion(char *s);
/**
 * is_palindrome - a function that returns 1 if a
 * str is a palindrome and 0 if not.
 * @s: input str
 * Return: the result
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - a function that returns the len of the str
 * @s: str array
 * Return: len of str
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * its_pal - a function that checks char of the string
 * @s: string input
 * @it: iterator times
 * @count: str length
 * Return: 1 if it is palindrome and 0 otherwise
 */
int its_pal(char *s, int it, int count)
{
	if (*(s + it) != *(s + count - 1))
	{
		return (0);
	}
	else if (it >= count)
	{
		return (1);
	}
	return (its_pal(s, it + 1, count - 1));
}
