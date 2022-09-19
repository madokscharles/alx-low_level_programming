#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 *
 * Return: void
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
