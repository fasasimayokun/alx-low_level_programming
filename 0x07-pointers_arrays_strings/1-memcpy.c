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
	int num = 0;

	while (num < n)
	{
		dest[num] = src[num];
		num++;
		n--;
	}
	return (dest);
}
