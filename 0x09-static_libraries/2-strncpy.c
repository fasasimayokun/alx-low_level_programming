#include "main.h"
/**
 * _strncpy -  a function that copies an exact number of string
 * from one string to another
 * @dest: where it is copying to
 * @src: where it's copying from
 * @n: exact no to copy
 * Return: a pointer to the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int strlen = 0;

	while (strlen < n && src[strlen] != '\0')
	{
		dest[strlen] = src[strlen];
		strlen++;
	}
	while (strlen < n)
	{
		dest[strlen] = '\0';
		strlen++;
	}
	return (dest);
}
