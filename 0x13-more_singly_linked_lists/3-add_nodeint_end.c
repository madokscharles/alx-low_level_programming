#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: first node of linked list
 * @n: new node to add
 *
 * Return: the address of the new element
 * NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new_node).n = n;
	(*new_node).next = NULL;

	if (head && !*head)
	{
		*head = new_node;
		return (new_node);
	}

	for (last_node = *head; (*last_node).next; last_node = (*last_node).next)
		;
	(*last_node).next = new_node;

	return (new_node);
}
