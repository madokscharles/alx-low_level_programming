#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *pter;
	unsigned int i, j = 0, k = 0;

	if (!s1)
		s1 = "";
	else
		for (; s1[j]; j++)
			;
	if (!s2)
		s2 = "";
	else
		for (; s2[k]; k++)
			;
	k++;
	pter = malloc((j + k) * sizeof(char));

	if (!pter)
		return (NULL);

	for (i = 0; i <= (j + k); i++)
	{
		if (i < j)
			pter[i] = s1[i];
		else
			pter[i] = s2[i - j];
	}

	return (pter);
}
