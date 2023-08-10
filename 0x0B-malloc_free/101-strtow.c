#include <stdlib.h>
#include "main.h"
/**
 * word_count - a function to count words in str
 * @s: str to check
 * Return: num of words
 */
int word_count(char *s)
{
	int f, a, wd_count;

	f = 0;
	wd_count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			f = 0;
		else if  (f == 0)
		{
			f = 1;
			wd_count++;
		}
	}
	return (wd_count);
}
/**
 * strtow - seperates a str into words
 * @str: str to seperate
 * Return: str pointer
 */
char **strtow(char *str)
{
	char **grid, *tmp;
	int a, b = 0;
	int len, c = 0;
	int wd, begin, stop;

	while (*(str + len))
		len++;
	wd = word_count(str);
	if (wd == 0)
		return (NULL);
	grid = (char **) malloc(sizeof(char *) * (wd + 1));
	if (grid == NULL)
		return (NULL);
	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				stop = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < stop)
					*tmp++ = str[begin++];
				*tmp = '\0';
				grid[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = a;
	}
	grid[b] = NULL;
	return (grid);
}
