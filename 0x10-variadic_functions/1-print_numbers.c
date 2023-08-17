#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the str to be printed between nums
 * @n: the num of ints passed to the func
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nms;
	unsigned int pos;

	va_start(nms, n);

	for (pos = 0; pos < n; pos++)
	{
		printf("%d", va_arg(nms, int));
		if (pos != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(nums);
}
