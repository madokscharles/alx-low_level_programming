#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: 0
 */

int main(void)
{
	int a, b, n;
	int pass[100];

	b = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		b += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			n = 2772 - b - '0';
			b += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
