#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: array
 * @n: length of array
 *
 * Return
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != (n - 1))
			printf("%i, ", a[i]);
		else
			printf("%i", a[i]);
		i++;
	}
	printf("\n");
}
