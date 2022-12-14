#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_p, length;

	if (!filename)
		return (-1);

	file_p = open(filename, O_RDWR | O_APPEND);
	if (file_p == -1)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;
		write(file_p, text_content, length);
	}
	close(file_p);

	return (1);
}
