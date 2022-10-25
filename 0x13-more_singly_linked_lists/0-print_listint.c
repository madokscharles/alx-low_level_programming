#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	for (count = 0; h; h = (*h).next, count++)
		printf("%d\n", (*h).n);

	return (count);
}
