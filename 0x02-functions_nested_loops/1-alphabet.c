#include "main.h"

/**
 * print_alphabet - prints out the alphabet a to z
 * main - main
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
