#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: beginning of linked list
 *
 * Return: sum, if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *search = head;
	int sum = 0;

	if (!search)
		return (sum);
	while (search)
	{
		sum += search->n;
		search = search->next;
	}

	return (sum);
}
