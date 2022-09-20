#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i;
	int a = 0;
	int b = -1;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			b = b * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			a = a * 10;
			a -= (s[i] - '0');
			c = 1;
		}
		else if (c == 1)
			break;
	}
	a = b * a;
	return (a);
}
