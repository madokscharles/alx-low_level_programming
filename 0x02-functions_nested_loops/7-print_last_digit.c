#include "main.h"

/**
 * print_last_digit - prints out last digit of a number
 * @n: variable to perform function on
 * main - main
 * Return: 0
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n = -n;
	}
	m = n % 10;
	if (m < 0)
	{
		m = -m;
	}
	_putchar(m + '0');

	return (m);
}
