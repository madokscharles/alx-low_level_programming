#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: argument vector
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *pter;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	pter = malloc((c + 1) * sizeof(char));

	if (pter == NULL)
	{
		free(pter);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			pter[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			pter[ia] = av[i][j];
	}
	pter[ia] = '\0';

	return (pter);
}
