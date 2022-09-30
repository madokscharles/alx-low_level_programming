#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: string of arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, result, tmp;

	x = 1;
	result = 0;

	while (x < argc)
	{
		y = 0;
		tmp = 0;
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] >= '0' && argv[x][y] <= '9')
				tmp = tmp * 10 + argv[x][y] - '0';
			else
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		result += tmp;
		x++;
	}
	printf("%d\n", result);

	return (0);
}
