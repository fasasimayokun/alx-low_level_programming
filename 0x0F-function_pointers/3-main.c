#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - prints the res of operation
 * @argc: the argument count or len
 * @argv: the array value
 * Return: 0 (success)
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int nm_1, nm_2;
	char *opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	nm_1 = atoi(argv[1]);
	opp = argv[2];
	nm_2 = atoi(argv[3]);

	if (get_op_func(opp) == NULL || opp[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opp == '/' && nm_2 == 0) || (*opp == '%' && nm_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opp)(nm_1, nm_2));
	return (0);
}
