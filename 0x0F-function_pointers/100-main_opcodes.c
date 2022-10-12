#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int argc1, i;
	unsigned char *pf;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	argc1 = atoi(argv[1]);
	if (argc1 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	pf = (unsigned char *)main;
	for (i = 0; i < (argc1 - 1); i++)
	{
		printf("%02x ", pf[i]);
	}
	printf("%02x", pf[i]);
	printf("\n");

	return (0);
}
