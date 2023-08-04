#include "main.h"
/**
 * _strncat - a function that joins two strings
 * where you can indicate the exact number you wanto copy
 * @dest: where to join to
 * @src: where to copy from
 * @n: the exact number yu wanto copy
 * Return: a string pointer of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int strlen_dest;
	int strlen_src;

	strlen_dest = 0;
	while (dest[strlen_dest] != '\0')
	{
		strlen_dest++;
	}

	strlen_src = 0;

	while (src[strlen_src] != '\0' && strlen_src < n)
	{
		dest[strlen_dest] = src[strlen_src];
		strlen_dest++;
		strlen_src++;
	}
	dest[strlen_dest] = '\0';
	return (dest);
}
