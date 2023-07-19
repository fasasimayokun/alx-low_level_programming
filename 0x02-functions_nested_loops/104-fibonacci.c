#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers
 * starting with 1 & 2
 * Return: 0
 */
int main(void)
{
	int num;
	unsigned long sum;
	unsigned long fib_num1 = 0, fib_num2 = 1;
	unsigned long a, b, c, d;
	unsigned long x, y;

	for (num = 0; num < 92; num++)
	{
		sum = x + y;
		printf("%lu, ", sum);
		x = y;
		y = sum;
	}
	a = x / 10000000000;
	b = x % 10000000000;
	c = y / 10000000000;
	d = y % 10000000000;

	for (num = 93; num < 99; num++)
	{
		x = a + c;
		y = b + d;
		if (b + d > 9999999999)
		{
			x += 1;
			y %= 10000000000;
		}
		printf("%lu%lu", x, y);
		if (num != 98)
		{
			printf(", ");
		}
		a = c;
		b = d;
		c = x;
		d = y;
	}
	printf("\n");
	return (0);
}
