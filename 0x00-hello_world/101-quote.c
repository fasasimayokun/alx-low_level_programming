#include <stdio.h>
#include <unistd.h>
/**
 * main - a function that outputs a string to the standard error on unix
 * Return: 1 successful program
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
