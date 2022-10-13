#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	va_list arg_point;
	unsigned int i = 0, expr = 0;
	char *ap;

	va_start(arg_point, format);

	while (format && format[i])
	{
		if (expr)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_point, int));
				break;
			case 'i':
				printf("%i", va_arg(arg_point, int));
				break;
			case 'f':
				printf("%f", va_arg(arg_point, double));
				break;
			case 's':
				arg = va_arg(arg_point, char *);
				if (ap)
				{
					printf("%s", ap);
					break;
				}
				printf("%p", ap);
				break;
			default:
				expr = 0;
				i++;
				continue;
		}
		expr = 1;
		i++;
	}
	printf("\n");
	va_end(arg_point);
}
