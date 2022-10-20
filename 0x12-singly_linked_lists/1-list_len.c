#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
