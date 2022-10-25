#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: pointer, beginning of linked list
 *
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int total;

	for (total = 0; head; head = (*head).next)
		total += (*head).n;

	return (total);
}
