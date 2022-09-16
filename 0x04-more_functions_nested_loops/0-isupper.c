#include "main.h"

/**
 * _isupper - Checks if argument is uppercase
 * @c: Character passed and checked
 * Return: return integer value 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
