#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element
 * If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
			{
				return (i);
			}
	}

	return (-1);
}
