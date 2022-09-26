#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: final memory area
 * @src: initial memory area
 * @n: number of byte
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *memDest = dest;
	char *memSrc = src;

	for (; n != 0; memDest++; memSrc++)
	{
		*memDest = *memSrc;
	}

	return (dest);
}
