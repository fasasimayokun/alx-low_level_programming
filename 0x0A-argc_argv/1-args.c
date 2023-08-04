#include <stdio.h>
#include "main.h"
/**
 * main - outputs the number of arguments passed to it exclude the prog name
 * @argc: total num of arguments
 * @argv: arr of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
