#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: specific char
 *
 * Return: pointer of an array of char
 */

char *create_array(unsigned int size, char c)
{
	char *pter;
	unsigned int i;

	if (size == 0)
		return (NULL);

	pter = (char *)malloc(size * sizeof(char));

	if (pter == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		pter[i] = c;

	return (pter);
}
