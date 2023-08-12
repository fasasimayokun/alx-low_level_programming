#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - checks if it contains a non digit
 * @s: string to be evaluated
 * Return: 0
 */
int is_digit(char s)
{
	int nm = 0;

	while (s[nm])
	{
		if (s[nm] < '0' || s[nm] > '9')
			return (0);
		nm++;
	}
	return (1);
}
/**
 * _strlen - returns the len of str
 * @str: string to check
 * Return: the len of str
 */
int _strlen(char *str)
{
	int nm = 0;

	while (s[nm] != '\0')
		nm++;
	return (nm);
}
/**
 * errors - check of errors
 * Return: nothing
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - mul 2 postive num
 * @argc: total num of arguments
 * @argv: arr of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2, *res;
	int num, num_1, num_2, nm, extra, digit_1, digit_2, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	num_1 = _strlen(str1);
	num_2 = _strlen(str2);
	num = num_1 + num_2 + 1;
	res = malloc(sizeof(int) * num);
	if (res == NULL)
		return (1);
	for (nm = 0; nm <= num_1 + num_2; nm++)
		res[nm] = 0;
	for (num_1 = num_1 - 1; num_1 >= 0; num_1--)
	{
		digit_1 = str1[num_1] - '0';
		extra = 0;
		for (num_2 = _strlen(str2) - 1; num_2 >= 0; num_2--)
		{
			digit_2 = str2[num_2] - '0';
			extra += res[num_1 + num_2 + 1] + (digit_1 * digit_2);
			res[num_1 + num_2 + 1] = extra % 10;
			extra /= 10;
		}
		if (extra > 0)
			res[num_1 + num_2 + 1] += extra;
	}
	for (nm = 0; nm < num - 1; nm++)
	{
		if (res[nm])
			a = 1;
		if (a)
			_putchar(res[nm] + '0');
	}
	if (!a)
		_putchar(48);
	_putchar('\n');
	free(res);
	return (0);
}
