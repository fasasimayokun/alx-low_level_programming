#include <stdio.h>
/**
 * main - a fizz-buzz
 * that print 1 - 100
 * Return: 0 (success)
 */
int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
	}
	return (0);
}
