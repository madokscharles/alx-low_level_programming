#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 *
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int y, x = 0;

	for (y = 0; y < 8; y++)
	{
		_putchar(a[x][y]);
		if (y == 7 && x < 7)
		{
			x++;
			y = -1;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
