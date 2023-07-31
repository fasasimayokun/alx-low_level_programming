#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: a pointer to a pointer variable
 * @to: a pointer variable
 * Return: void (nothing)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
