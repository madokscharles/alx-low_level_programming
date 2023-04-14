#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located
 * if value is not present in array or array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%i%s", array[i], i == right ? "\n" : ", ");
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);

}
