#include <stdio.h>
#include "main.h"
/**
 * main - a function that prints the name of the program
 * @argc: total num of arguments including the file name
 * @argv: arr of arguments
 * Return: 0 (success)
 */
int main(int argc, __attribute_((unsed)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
