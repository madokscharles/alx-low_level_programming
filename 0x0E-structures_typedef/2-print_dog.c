#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 *
 * Return: no return
 */

void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d)
	{
		name = d->name;
		owner = d->owner;

		if (!name)
			name = "(nil)";
		if (!owner)
			owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
	}
}
