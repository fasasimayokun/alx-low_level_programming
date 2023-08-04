#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: the 1st str value/argument
 * @s2: the 2nd str value/argument
 * Return: the diff of the 2 str if its not equal
 */
int _strcmp(char *s1, char *s2)
{
	int strlen = 0;

	while (s1[strlen] != '\0' && s2[strlen] != '\0')
	{
		if (s1[strlen] != s2[strlen])
		{
			return (s1[strlen] - s2[strlen]);
		}
		strlen++;
	}
	return (0);
}
