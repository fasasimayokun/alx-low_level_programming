#include "main.h"
/**
 * flip_bits - a func that returns num
 * of bits you would need to flip to get from one number to another
 * @n: the argument 1st num
 * @m: the argument 2nd num
 * Return: num of bits to replace
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int nm;
	int cnt = 0;
	unsigned long int pres_val;
	unsigned long int x_o_r = n ^ m;

	for (nm = 63; nm >= 0; nm--)
	{
		pres_val = x_o_r >> nm;
		if (pres_val & 1)
		{
			cnt++;
		}
	}
	return (cnt);
}
