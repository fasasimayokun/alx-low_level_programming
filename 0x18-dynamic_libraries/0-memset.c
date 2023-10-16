#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: the array to fill
 * @b: the value to use
 * @n: num of byte to change
 * Return: changed array with constant val of n nums
 */
char *_memset(char *s, char b, unsigned int n)
{
	int num = 0;

	while (n > 0)
	{
		s[num] = b;
		num++;
		n--;
	}
	return (s);
}
