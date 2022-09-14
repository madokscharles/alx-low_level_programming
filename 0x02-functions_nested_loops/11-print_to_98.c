#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers fro n to 98
 * @n: variable to determine if input is greater than or less than or is 98
 * main - main
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
