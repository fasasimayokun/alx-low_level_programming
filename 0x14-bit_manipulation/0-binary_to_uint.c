#include "main.h"
/**
 * binary_to_uint - a func that converts a binary num to unsigned int
 * @b: array of chars containing the binary num
 * Return: converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int nm;
	unsigned int bas_ten = 0;

	if (!b)
	{
		return (0);
	}
	for (nm = 0; b[nm]; nm++)
	{
		if (b[nm] < '0' || b[nm] > '1')
		{
			return (0);
		}
		bas_ten = 2 * bas_ten + (b[nm] - '0');
	}
	return (bas_ten);
}
