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
	char *haystack1 = haystack - 1;
	int x, y;

	for (x = 0; *(needle + x); x++)
	{
		;
	}
	do {
		haystack1++;
		for (y = 0; y < x; y++)
		{
			if (*(haystack1 + y) != *(needle + y))
				break;
		}
		if (y == x)
			return (haystack1);
	} while (*s1 != '\0');

	return (0);
}
