#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: beginning of linked list
 *
 * Return: sum, if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
