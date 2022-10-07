#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer to concatenated string
 * if malloc fails, status value is equal to 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pter;
	unsigned int i, len1, len2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len1 = 0; *(s1 + len1); len1++)
		;
	for (len2 = 0; *(s2 + len2); len2++)
		;

	if (len2 < n)
		n = len2;

	pter = malloc((len1 + n + 1) * sizeof(char));

	if (!pter)
		return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			pter[i] = s1[i];
		else
			pter[i] = s2[i - len1];
	}
	pter[i] = '\0';

	return (pter);
}
