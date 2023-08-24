#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * first - prints a string b4 excution of main func
 * Return: nothing (void)
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
