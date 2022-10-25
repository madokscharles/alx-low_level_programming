#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer, beginning of linked list
 * @index: index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (1 = 0; head; i++, head = (*head).next)
		if (i == index)
			return (head);

	return (NULL);
}
