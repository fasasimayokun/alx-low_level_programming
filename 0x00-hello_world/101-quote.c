#include <stdio.h>
#include <unistd.h>
/**
 * main - a function that outputs a string to the standard error on unix
 * Return: 0 successful program
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
