#include "main.h"
/**
 * _strcat -  a function that joins two strings
 * @dest: where the 2nd str is appended to
 * @src: where the 2nd str is copied from
 * Return: a string or a pointer to the dest
 */
char *_strcat(char *dest, char *src)
{
	int strlen_dest;
	int strlen_src;

	strlen_dest = 0;

	while (dest[strlen_dest] != '\0')
	{
		strlen_dest++;
	}

	strlen_src = 0;
	while (src[strlen_src] != '\0')
	{
		dest[strlen_dest] = src[strlen_src];
		strlen_dest++;
		strlen_src++;
	}
	dest[strlen_dest] = '\0';
	return (dest);
}
