#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer, pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui, base;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;
	len--;
	for (base = 1, ui = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			base *= 2;
			continue;
		}
		else if (b[len] == '1')
		{
			ui += base;
			base *= 2;
			continue;
		}
		return (0);
	}
	return (ui);
}
