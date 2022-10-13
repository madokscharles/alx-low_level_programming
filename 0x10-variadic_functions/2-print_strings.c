#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: no return
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_point;
	unsigned int i;
	char *ap;

	va_start(arg_point, n);

	for (i = 0; i < n; i++)
	{
		ap = va_arg(arg_point, char *);
		if (ap)
		{
			printf("%s", ap);
		}
		else
		{
			printf("%p", ap);
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arg_point);
}
