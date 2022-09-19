#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a, b;

	a = 0;

	while (str[a] != '\0')
		a++;
	b = (a) / 2;
	if (a % 2 != 0)
		b = ((a - 1) / 2) + 1;
	for (; b < a; b++)
		_putchar(str[b]);
	_putchar('\n');
}
