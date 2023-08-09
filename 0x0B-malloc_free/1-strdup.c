#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: the str arr to copy
 * Return: a pointer to a new str which is the copy of the str argument
 */
char *_strdup(char *str)
{
	int x, y;
	char *arr_cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	arr_cpy = malloc(sizeof(char) * (x + 1));

	if (arr_cpy == NULL)
		return (NULL);

	for (y = 0; arr_cpy[y]; y++)
	{
		arr_cpy[y] = str[y];
	}
	return (arr_cpy);
}
