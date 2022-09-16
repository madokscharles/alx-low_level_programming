#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 * Return: return void
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
