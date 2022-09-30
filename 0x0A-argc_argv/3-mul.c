#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: string of argument passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
		printf("Error\n");
	else
	{
		i = strtol(argv[1], 0, 10);
		j = strtol(argv[2], 0, 10);
		printf("%d\n", i * j);
	}

	return (0);
}
