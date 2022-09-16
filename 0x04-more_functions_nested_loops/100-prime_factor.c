#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int i, j, max;

	i = 612852475143;
	max = -1;
	while (i % 2 == 0)
	{
		max = 2;
		i /= 2;
	}
	for (j = 3; j <= sqrt(i); j = i + 2)
	{
		while (i % j == 0)
		{
			max = j;
			i = i / j;
		}
	}
	if (i > 2)
		max = i;
	printf("%ld\n", max);
	return (0);
}
