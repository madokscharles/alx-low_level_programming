#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer 2
 *
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; dest[x] != '\0'; x++)
		dest[x] = '\0';
	return (dest);
}
