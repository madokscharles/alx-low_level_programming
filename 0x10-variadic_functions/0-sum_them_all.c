#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameters
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_point;
	int sum_of_all = 0;
	unsigned int i;

	if (!n)
	{
		return (0);
	}

	va_start(arg_point, n);

	for (i = 0; i < n; i++)
		sum_of_all += va_arg(arg_point, int);

	va_end(arg_point);

	return (sum_of_all);
}
