#include "main.h"
/**
 * clear_bit - a func that sets the val of a bit to 0 at a given index.
 * @n: ptr to the num to replace
 * @index: position of the bit to clear
 * Return: 1 (success) else -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1 << index) & *n);
	return (1);
}
