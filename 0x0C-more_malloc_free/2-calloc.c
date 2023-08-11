#include <stdlib.h>
#include "main.h"

/**
 * _memset - initialize with const value
 * @mem: memory area to fill
 * @c: char to copy
 * @num: number of times to copy b
 * Return: pointer to mem s
 */
char *_memset(char *mem, char c, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
	{
		mem[i] = c;
	}
	return (mem);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: first argument
 * @size: size argument
 * Return: notheing (void)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(size * nmemb);
	if (pt == NULL)
		return (NULL);

	_memset(pt, 0, size * nmemb);

	return (pt);
}
