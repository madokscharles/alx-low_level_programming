#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer, beginning of linked list
 *
 * Return: address of the node where the loop starts
 * NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	while (head && (*head).next)
	{
		slow = head;
		fast = (*head).next;
		while (slow != fast)
		{
			if (slow)
				slow = (*slow).next;
			if (fast == head)
				return (head);
			if (fast)
				fast = (*fast).next;
			if (fast == head)
				return (head);
			if (fast)
				fast = (*fast).next;
			if (fast == head)
				return (head);
		}
		head = (*head).next;
	}
	return (NULL);
}
