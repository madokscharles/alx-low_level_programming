#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 * if value is not present or array is NULL, return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high;

	high = size - 1;
	while (array)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%li] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}

	return (-1);
}
