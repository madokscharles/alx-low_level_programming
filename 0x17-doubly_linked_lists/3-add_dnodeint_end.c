#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: beginning of linked list
 * @n: value to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	while (temp && temp->next)
		temp = temp->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = temp;

	if (!*head)
		*head = new_node;
	if (temp)
		temp->next = new_node;

	return (new_node);
}
