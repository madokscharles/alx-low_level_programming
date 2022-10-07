#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 *
 * Return: pointer to the allocated memory
 * if malloc fails, the malloc_checked function
 * should cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *pter;

	pter = malloc(b);

	if (!pter)
		exit(98);

	return (pter);
}
