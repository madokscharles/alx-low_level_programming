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
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) =  *(src + x);
	}

	return (dest);
}
