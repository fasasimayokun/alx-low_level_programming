#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a str to an int
 * @s: str val to change
 * Return: the int equivalent of the str
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0;
	int count = 0, d = 0, num = 0;

	while (s[count] != '\0')
		count++;
	while (a < count && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);
	return (c);
}
/**
 * main - mul two number
 * @argc: num of arguments
 * @argv: arr of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
