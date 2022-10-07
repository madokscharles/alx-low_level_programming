#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pter;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	pter = malloc(nmemb * size);

	if (!pter)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *) pter)[i] = 0;

	return (pter);
}
