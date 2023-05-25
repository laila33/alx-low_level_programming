#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *r, *p = "";

	va_list x;

	va_start(x, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(x, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(x, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(x, double));
					break;
				case 's':
					r = va_arg(x, char *);
					if (!r)
						r = "(nil)";
					printf("%s%s", p, r);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(x);
}
