#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all
 * its parameter
 * @n: the num of parameters passed to the func
 * Return: the sum of the params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int nm, sum = 0;

	va_start(ap, n);

	for (nm = 0; nm < n; nm++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
