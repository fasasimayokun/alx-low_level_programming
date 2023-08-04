#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string input
 * @accept: input argument
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
			{
				n++;
				break;
			}
			else if (accept[num + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
