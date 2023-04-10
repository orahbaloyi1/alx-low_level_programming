#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: the string to add to the end
 * Return: -1 or NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int len = 0;
	int w = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}



