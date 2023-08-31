#include "main.h"
/**
 * print_binary - a func that prints the binary representation of a num
 * @n: num to display in binary
 * Return: void (nothing)
 */
void print_binary(unsigned long int n)
{
	int nm;
	int cnt = 0;
	unsigned long int pres_val;

	for (nm = 63; nm >= 0; nm--)
	{
		pres_val = n >> nm;

		if (pres_val & 1)
		{
			_putchar(49);
			cnt++;
		}
		else if (cnt)
		{
			_putchar(48);
		}
	}
	if (!cnt)
	{
		_putchar(48);
	}
}
