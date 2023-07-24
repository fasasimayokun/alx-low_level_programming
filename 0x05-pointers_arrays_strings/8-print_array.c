#include <stdio.h>
/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: array name
 * @n: number of element to print
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < (n - 1); num++)
	{
		printf("%d, ", a[num]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
