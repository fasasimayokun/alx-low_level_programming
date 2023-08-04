#include <stdio.h>
#include "main.h"
/**
 * main - outputs all arguments its takes
 * @argc: num of arguments
 * @argv: arr of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
