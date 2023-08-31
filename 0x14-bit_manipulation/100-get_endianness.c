#include "main.h"
/**
 * get_endianness - a func that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int nm = 1;
	char *cn = (char *)&nm;
	return (*cn);
}
