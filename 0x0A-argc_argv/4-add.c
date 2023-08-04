#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check str if there are num
 * @str: str arr
 * Return: 0 (success)
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: argment array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int count = 1;
	int sum  = 0;
	int str_int;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_int = atoi(argv[count]);
			sum = sum + str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
