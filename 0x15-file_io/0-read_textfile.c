#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: the number of letters it should read and print
 *
 * Return:  actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_p, l_checks, l_value;

	if (filename == NULL)
		return (0);
	file_p = open(filename, O_RDONLY, 0700);
	if (file_p == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	l_value = read(file_p, buffer, letters);
	if (l_value == -1)
	{
		free(buffer);
		return (0);
	}
	l_checks = write(STDOUT_FILENO, buffer, l_value);
	if (l_checks == -1)
	{
		free(buffer);
		return (0);
	}
	close(file_p);

	return (l_checks);
}
