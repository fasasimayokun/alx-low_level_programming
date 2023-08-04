#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the char to stdout
 * @c: the char to output
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
