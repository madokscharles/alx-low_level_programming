#include "main.h"

/**
 * copy_text_file - function to copy one file into another
 * @copyfile: file to copy
 * @newfile: new file
 * @filefrom: file1
 * @fileto: file2
 *
 * Return: no return
 */

void copy_text_file(int copyfile, int newfile, char *file_from, char *file_to)
{
	char buffer[1024];
	ssize_t read_length, write_length;

	read_length = 1;
	write_length = 1;
	while (read_length)
	{
		read_length = read(copyfile, buffer, sizeof(buffer));
		if (read_length == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file_from %s\n", file_from);
			close(copyfile);
			close(newfile);
			exit(98);
		}
		if (!read_length)
			break;
		write_length = write(newfile, buffer, read_length);
		if (write_length == -1 || write_length != read_length)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file_to %s\n", file_to);
			close(copyfile);
			close(newfile);
			exit(99);
		}
	}
}
