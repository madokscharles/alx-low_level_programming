#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: to dertermine if input is lowercase
 * main -main
 * Return: 0
 */

int _islower(int c)
{
	int x;

	x = 0;
	if (c >= 'a' && c <= 'z')
	{
		x = 1;
	}

	return (x);
}
