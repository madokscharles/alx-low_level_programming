#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer, beginning of linked list
 * @idx: index, where new node should be added
 * @n: n
 *
 * Return: if it is not possible to add the new node at index idx
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *keep = *head;

	i = 0;
	if (!idx)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);

		(*new_node).n = n;
		(*new_node).next = *head;

		*head = new_node;

		return (*head);
	}

	while (keep)
	{
		if (i == (idx - 1))
		{
			new_node = malloc(sizeof(listint_t));
			if (!new_node)
				return (NULL);
			(*new_node).n = n;
			(*new_node).next = new_node;

			return (new_node);
		}
		keep = (*keep).next;
		i++;
	}

	return (NULL);
}
