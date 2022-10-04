#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *pter;
	unsigned int i, j;

	if (!str)
		return (NULL);

	for (j = 0; str[j]; j++)
		;
	j++;
	pter = malloc(j * sizeof(char));

	if (!pter)
		return (NULL);

	for (i = 0; i <= j; i++)
		pter[i] = str[i];

	return (pter);
}
