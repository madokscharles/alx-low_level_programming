#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_c - prints characters
 * @list: arguments
 * @sep: Separator
 */

void print_c(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_i - prints integers
 * @list: arguments
 * @sep: Separator
 */

void print_i(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}

/**
 * print_f - prints floats
 * @list: arguments
 * @sep: Separator
 */

void print_f(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}

/**
 * print_s - prints strings
 * @list: arguments
 * @sep: Separator
 */

void print_s(va_list list, char *sep)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
		s = "(nil)";

	printf("%s%s", sep, s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep;
	int i, j;

	fm_t fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(ap, format);

	i = 0;
	sep = "";

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *(fm[j]).fm)
			{
				fm[j].p(ap, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
