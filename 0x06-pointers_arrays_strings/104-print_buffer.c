#include "main.h"
#include <stdio.h>
/**
 * print_buffer - a functions that outputs a buffer
 * @b: buffer
 * @size: length
 * Return: void (nothing)
 */
void print_buffer(char *b, int size)
{
	int oct, x, y;

	oct = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (oct < size)
	{
		y = size - oct < 10 ? size - oct : 10;
		printf("%08x: ", oct);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
				printf("%02x", *(b + oct + x));
			else
				printf(" ");
			if (x % 2)
				printf(" ");
		}
		for (x =  0; x < y; x++)
		{
			int c = *(b + oct + x);

			if (c < 32 || c > 132)
			{
				z = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		oct = oct + 10;
	}
}
