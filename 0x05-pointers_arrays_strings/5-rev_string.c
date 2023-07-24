#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: a string argument
 * Return: void
 */
void rev_string(char *s)
{
	char temp = s[0];
	int i;
	int str_len = 0;

	while (*s != '\0')
	{
		str_len += 1;
		s++;
	}

	for (i = 0; i < str_len; i++)
	{
		str_len--;
		temp  = s[i];
		s[i] = s[str_len];
		s[str_len] = temp;
	}
}
