#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: array val of where to copy to
 * @src: array val of where to copy from
 * @n: how many items to copy
 * Return: the modified dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, num = 0;

	for (i = n; num < i; num++)
	{
		dest[num] = src[num];
		n--;
	}
	return (dest);
}
