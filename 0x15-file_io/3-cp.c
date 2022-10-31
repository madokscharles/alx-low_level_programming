#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: the argument pointer
 *
 * Return: zero on success
 */

int main(int argc, char **argv)
{
	int copyfile, newfile;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copyfile = open(argv[1], O_RDONLY);
	if (copyfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	newfile = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (newfile == -1)
		newfile = open(argv[2], O_TRUNC | O_WRONLY);
	if (newfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(copyfile);
		exit(99);
	}

	copy_text_file(copyfile, newfile, argv[1], argv[2]);

	if (close(copyfile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copyfile);
		close(newfile);
		exit(100);
	}
	if (close(newfile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", newfile);
		exit(100);
	}

	return (0);
}
