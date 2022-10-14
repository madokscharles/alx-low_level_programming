#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	va_list arg_point;
	unsigned int a = 0, b = 0, x;
	char *ap;
	const char c_i_f_s[] = "cifs";

	va_start(arg_point, format);
	while (format && format[a])
	{
		x = 0;
		while (c_i_f_s[x])
		{
			if (format[a] == c_i_f_s[x] && b)
			{
				printf(", ");
				break;
			} x++;
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(arg_point, int)), b = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg_point, int)), b = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg_point, double)), b = 1;
				break;
			case 's':
				ap = va_arg(arg_point, char *), b = 1;
				if (!ap)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ap);
				break;
		} a++;
	}
	printf("\n");
	va_end(arg_point);
}
