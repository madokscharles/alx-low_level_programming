#include "lists.h"

/**
 * listint_len - A function that returns the number
 * of elements in a linked listint_t list.
 * @h: pointer
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num_elements;

	for (num_elements = 0; h; h = (*h).next, num_elements++)
		;

	return (num_elements);
}
