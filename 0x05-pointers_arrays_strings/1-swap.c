#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b);
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
