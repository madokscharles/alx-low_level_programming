#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int i, j, lp, num = 612852475143;
	int prime;

	for (i = 2; i < num / 2; i++)
	{
		prime = 1;
		if (num % i == 0)
			lp = num / i;
		for (j = 2; j < lp / 2; j++)
			if (lp % j == 0)
			{
				prime = 0;
				break;
			}
		if (prime)
		{
			printf("%ld\n", lp);
			break;
		}
	}
	return (0);
}
