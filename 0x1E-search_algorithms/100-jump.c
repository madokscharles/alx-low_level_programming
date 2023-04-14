#include "search_algos.h"

/**
 * jump_search - a function that seraches for a value in a sorted array of
 * integers using Jump search
 * @array: is a pointer to the element of the array
 * @size: is the number of elements
 * @value: is the value to search
 *
 * Return: the first index where value is located
 * if value is not present or array is NULL, return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump = sqrt(size);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		i += jump;
	}
	i -= jump;
	printf("Value found between indexes [%li] and [%li]\n", i, i + jump);
	for (; i <= (i + jump) && i < size; i++, jump--)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
