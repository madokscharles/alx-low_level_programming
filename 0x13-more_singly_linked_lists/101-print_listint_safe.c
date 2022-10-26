#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer, beginning of linked link
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *action_1, *action_2;
	unsigned int i, action;

	action = 0;
	if (!head)
		exit(98);
	for (i = 1; (*head).next && !action; head = (*head).next, i++)
	{
		if ((*head).next)
			action_1 = (*head).next;
		if ((*head).next->next)
			action_2 = (*head).next->next;
		while (action_1 != action_2)
		{
			if (action_1)
				action_1 = (*action_1).next;
			if (action_2 == head)
				action = 1;
			if (action_2 && !action)
				action_2 = (*action_2).next;
			if (action_2 == head)
				action = 1;
			if (action_2 && !action)
				action_2 = (*action_2).next;
			if (action_2 == head)
				action = 1;
		}
		printf("[%p] %d\n", (void *)head, (*head).n);
	}
	for (; action && (*head).next != action_2; i++, head = (*head).next)
		printf("[%p] %d\n", (void *)head, (*head).n);
	printf("[%p] %d\n", (void *)head, (*head).n);
	if (action_2)
		printf("-> [%p] %d\n", (void *)action_2, (*action_2).n);

	return (i);
}
