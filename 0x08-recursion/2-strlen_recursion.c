#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string array
 * Return: len of s
 */
int _strlen_recursion(char *s)
{
	int str_len = 0;

	if (*s)
	{
		str_len++;
		str_len = str_len + _strlen_recursion(s + 1);
	}

	return (str_len);
}
