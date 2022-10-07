#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 * if man > mix, returns NULL
 * if malloc fails, returns NULL
 */

int *array_range(int min, int max)
{
	int *pter, i;

	if (min > max)
		return (NULL);

	pter = malloc(((max - min) + 1) * sizeof(int));

	if (!pter)
		return (NULL);

	for (i = 0; (min + i) <= max; i++)
		pter[i] = (min + i);

	return (pter);
}
