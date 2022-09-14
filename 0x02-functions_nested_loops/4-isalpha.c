#include "main.h"

/**
 * _isalpha - To check for alphabetical characters
 * @c: variable to determine if input is lowercase
 * main - main
 * Return: 0
 */

int _isalpha(int c)
{
	int x;

	x = 0;
	if (c >= 'a' && c <= 'z')
	{
		x = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}

	return (x);

}
