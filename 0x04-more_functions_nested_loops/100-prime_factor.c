#include <stdio.h>
#include <math.h>
/**
 * main - prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 * Return: Always 0
 */
int main(void)
{
	long int num;
	long int large;
	long int i;

	num = 612852475143;
	large = -1;

	while (num % 2 == 0)
	{
		large = 2;
		num = num / 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			large = i;
			num = num / i;
		}
	}

	if (num > 2)
		large = num;
	printf("%ld\n", large);

	return (0);
}
