#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - a func that prints out anything
 * @format: is a list of types of arguments passed to the func
 */
void print_all(const char * const format, ...)
{
	char *str, *sp = "";
	int nm = 0;

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[nm])
		{
			switch (format[nm])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					nm++;
					continue;
			}
			sp = ", ";
			nm++;
		}
	}
	printf("\n");
	va_end(list);
}
