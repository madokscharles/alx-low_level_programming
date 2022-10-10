#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct dog
 * if fails, returns NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pter;
	char *dname, *downer;
	int x, y, i;

	pter = malloc(sizeof(dog_t));
	if (!pter)
		return (NULL);
	for (x = 0; name[x]; x++)
		;
	for (y = 0; owner[y]; y++)
		;

	x++;
	y++;
	dname = malloc(x);
	if (!dname)
	{
		free(pter);
		return (NULL);
	}
	downer = malloc(y);
	if (!downer)
	{
		free(dname);
		free(pter);
		return (NULL);
	}
	for (i = 0; i < x; i++)
		dname[i] = name[i];
	for (i = 0; i < y; i++)
		downer[i] = owner[i];

	pter->name = dname;
	pter->owner = downer;
	pter->age = age;

	return (pter);
}
