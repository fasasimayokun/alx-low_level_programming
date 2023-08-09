#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strs
 * @s1: str arr destination
 * @s2: str arr to append
 * Return: pointer to char arr
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = 0;
	y = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	concat_str = malloc(sizeof(char) * (x + y + 1));

	if (concat_str == NULL)
		return (NULL);

	x = 0;
	y = 0;

	while (s1[x] != '\0')
	{
		concat_str[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		concat_str[x] = s2[y];
		x++;
		y++;
	}

	concat_str[x] = '\0';
	return (concat_str);
}
