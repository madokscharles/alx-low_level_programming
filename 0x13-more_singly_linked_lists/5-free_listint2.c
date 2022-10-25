#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer, beginning of linked list
 *
 * Return: return nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *keep;

	while (head && *head)
	{
		keep = *head;
		*head = (**head).next;
		free(keep);
	}
}
