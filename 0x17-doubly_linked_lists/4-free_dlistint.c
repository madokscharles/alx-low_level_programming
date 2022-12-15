#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: beginning of linked list
 *
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = (*head).next;
		free(temp);
	}
}
