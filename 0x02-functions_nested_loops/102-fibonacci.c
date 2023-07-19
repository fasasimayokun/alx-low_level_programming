#include <stdio.h>
/**
 * main - a function that printsa fibanocci number up to 50
 * starting from 1 and 2
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 50)
	{
		if (a == 0)
		{
			printf("%d", b);
		}
		else if (a == 1)
		{
			printf(", %d", c);
		}
		else
		{
			c += b;
			b = c - b;
			printf(", %d", c);
		}
		++a;
	}
	printf("\n");
	return (0);
}
