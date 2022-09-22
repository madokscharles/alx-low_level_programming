#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes used from src
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
		;
	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*temp = *src;
		temp++;
		n--;
	}
	return (dest);
}
