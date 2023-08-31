#include "main.h"
/**
 * set_bit - a func that sets a bit at a given position to 1
 * @n: ptr to the num to set
 * @index: position of the bit to set to 1
 * Return: 1 (success) else -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1 << index) | *n);
	return (1);
}
