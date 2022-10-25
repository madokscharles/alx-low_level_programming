#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: first node of linked list
 *
 * Return: return nothing
 */

void free_listint(listint_t *head);
{
	listint_t *keep;

	while (head)
	{
		keep = head;
		head = (*head).next;
		free(keep);
	}
}
