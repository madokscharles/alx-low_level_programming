#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: beginning of linked lists
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *delete, *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		delete = temp;
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(delete);

		return (1);
	}

	for (i = 0; temp; i++, temp = temp->next)
		if (i == index - 1 && temp->next)
		{
			delete = temp->next;
			temp->next = delete->next;
			if (temp->next)
				temp->next->prev = temp;
			free(delete);

			return (1);
		}

	return (-1);
}
