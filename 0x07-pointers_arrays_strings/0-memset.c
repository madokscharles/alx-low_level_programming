#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to fill
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *x = s;

	for (; n != 0; x++, n--)
	{
		*x = b;
	}

	return (s);
}
