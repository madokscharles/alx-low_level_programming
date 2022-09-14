#include "main.h"

/**
 * print_sign - prints out sign of a number
 * @n: variable to determine if input is greater than, less than or is zero
 * main - main
 * Return: 0
 */

int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		x = -1;
	}
	else
	{
		_putchar('0');
		x = 0;
	}

	return (x);
}
