#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
		a++;
	a--;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
