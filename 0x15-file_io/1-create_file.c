#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success
 * -1 on failure (file can not be created
 *  file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file_p, length, l_checks;

	length = 0;
	l_checks = 0;
	if (!filename)
		return (-1);

	file_p = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (file_p == -1)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;
		l_checks = write(file_p, text_content, length);
	}
	close(file_p);
	if (l_checks != length)
		return (-1);

	return (1);
}
