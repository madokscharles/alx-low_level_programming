#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer, beginning of linked list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current,  *prev = NULL;

	while (*head)
	{
		current = (**head).next;
		(**head).next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;

	return (*head);
}
