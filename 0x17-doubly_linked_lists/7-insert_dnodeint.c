#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: beginning of linked list
 * @idx: index of the list where the new node should be added
 * @n: value to add
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *temp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h)
			(*h)->prev = new_node;

		*h = new_node;

		return (new_node);
	}

	for (i = 0; temp; i++, temp = temp->next)
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			if (new_node->next)
				new_node->next->prev = new_node;
			new_node->prev = temp;
			temp->next = new_node;

			return (new_node);
		}
	free(new_node);

	return (NULL);
}
