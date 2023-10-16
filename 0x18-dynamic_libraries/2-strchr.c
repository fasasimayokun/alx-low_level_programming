#include "main.h"
/**
 * _strchr -  function that locates a character in a string
 * @s: string input
 * @c: char to find
 * Return: a pointer to the 1st occurence of char
 */
char *_strchr(char *s, char c)
{
	int num = 0;

	while (s[num] >= '\0')
	{
		if (s[num] == c)
		{
			return (&s[num]);
		}
		num++;
	}
	return (0);
}
