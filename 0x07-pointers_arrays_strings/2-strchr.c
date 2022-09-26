#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	for (; *(s + x) != '\0'; x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	if (*(s + x) == c)
		return (s + x);

	return ('\0');
}
