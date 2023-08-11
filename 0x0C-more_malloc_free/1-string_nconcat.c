#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strs.
 * @s1: the destination str array
 * @s2: the source str to copy
 * @n: the size argument
 * Return: a pointer to the newly created array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int x = 0, y = 0;
	unsigned int num_1 = 0, num_2 = 0;

	while (s1 && s1[num_1++])
	{
		num_1++;
	}

	while (s2 && s2[num_2++])
	{
		num_2++;
	}

	if (n < len2)
	{
		str = malloc(sizeof(char) * (num_1 + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (num_2 + num_1 + 1));
	}
	if (!str)
		return (NULL);
	while (x < num_1)
	{
		str[x] = s1[x];
		x++;
	}
	while (n < num_2 && x < (num_1 + n))
	{
		str[x++] = s2[y++];
	}
	while (n >= num_2 && x < (num_1 + num_2))
		str[x++] = s2[y++];

	str[x] = '\0';
	return (str);
}
