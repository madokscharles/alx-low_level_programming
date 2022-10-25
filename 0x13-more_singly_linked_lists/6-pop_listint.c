#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 *
 * @head: pointer, beginning of linked link
 *
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *keep;
	int del_node;

	if (head && *head)
	{
		keep = *head;
		del_node = (**head).n;
		free(keep);

		return (del_node);
	}

	return (0);
}
