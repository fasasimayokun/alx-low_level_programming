#include "main.h"
/**
 * get_bit - a func that returns the val of a bit at a position in a base10 num
 * @n: num to find
 * @index: position of the bit
 * Return: val of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binVal;

	if (index > 63)
	{
		return (-1);
	}
	binVal = (n >> index) & 1;
	return (binVal);
}
