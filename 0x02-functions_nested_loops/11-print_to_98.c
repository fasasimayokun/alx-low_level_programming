#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -  a function that prints all
 * natural numbers from n to 98
 * @n: integer argument
 * Return: void
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d\n", x);
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
	else
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d\n", x);
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
}
