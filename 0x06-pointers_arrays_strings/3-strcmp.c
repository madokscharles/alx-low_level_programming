#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: size difference of strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		if ((s1[i] - s2[i]) != 0)
			break;
	}
	return (s1[i] - s2[i]);
}
