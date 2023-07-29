#include "main.h"
/**
 * reverse_array - a function that reverses the content of an arr of ints
 * @a: a pointer array val/the array to reverse
 * @n: the len of the arr
 * Return: nothing (void)
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x < n; x++)
	{
		n--;
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
