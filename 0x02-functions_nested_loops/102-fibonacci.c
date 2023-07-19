#include <stdio.h>
/**
 * main - a function that printsa fibanocci number up to 50
 * starting from 1 and 2
 * Return: 0
 */
int main(void)
{
	int a = 0;
	long b = 1;
	long c = 2;

	while (a < 50)
	{
		if (a == 0)
		{
			printf("%ld", b);
		}
		else if (a == 1)
		{
			printf(", %ld", c);
		}
		else
		{
			c += b;
			b = c - b;
			printf(", %ld", c);
		}
		++a;
	}
	printf("\n");
	return (0);
}
