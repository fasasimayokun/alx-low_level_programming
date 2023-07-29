#include "main.h"
/**
 * string_toupper - a function that changes
 * all lowercase letters of a string to uppercase
 * @str: the string value
 * Return: a pointer char
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[len] >= 97 && str[len] <= 122)
		{
			str[len] = str[len] - 32;
		}
		len++;
	}
	return (str);
}
