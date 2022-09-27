#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: square matrix
 * @size: matrix size
 *
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int x, first = 0, second = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			first += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			second += *(a + x);
	}
	printf("%d, %d\n", first, second);
}
