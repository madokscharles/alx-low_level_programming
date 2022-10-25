#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer, beginning of linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, p_delete;
	listint_t *keep, *del_node;

	p_delete = 0;
	if (!*head)
		return (-1);
	for (i = 0, keep = *head; keep && index; i++, keep = (*keep).next)
		if (i == (index - 1))
		{
			p_delete = 1;
			break;
		}

	if (p_delete)
	{
		del_node = (*keep).next;
		(*keep).next = (*del_node).next;
		free(del_node);
		return (1);
	}
	else if (!index && (**head).next)
	{
		del_node = *head;
		*head = (*del_node).next;
		free(del_node);
		return (1);
	}
	else if (!index && *head)
	{
		*head = NULL;
		free(*head);
		return (1);
	}

	return (-1);
}
