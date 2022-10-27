#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int check = 1;
	char *pnter;

	pnter = (char *)&check;
	if (*pnter == 0)
	{
		return (0);
	}
	else
		return (1);
}
