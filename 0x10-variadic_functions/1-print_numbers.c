#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string
 * @n: number of integers passed to the function
 *
 * Return: no return
 * If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_point;
	unsigned int i;

	va_start(arg_point, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_point, int));
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arg_point);
}
