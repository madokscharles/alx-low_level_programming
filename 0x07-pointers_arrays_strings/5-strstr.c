#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *hayst;
	char *needl;

	while (*haystack != '\0')
	{
		hayst = haystack;
		needl = needle;
		while (*haystack != '\0' && *needl != '\0' && *haystack == *needl)
		{
			haystack++;
			needl++;
		}
		if (!*needl)
			return (hayst);
		haystack = hayst + 1;
	}

	return (0);
}
