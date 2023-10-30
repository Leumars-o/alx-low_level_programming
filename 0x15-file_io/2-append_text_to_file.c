#include "main.h"
/**
  * append_text_to_file - function that appends text at the end of a file
  * @filename: name of the file
  * @text_content: NULL terminated string to add at the end of the file
  * Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, a, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
	{
		if (fd)
			return (1);
		else
			return (-1);
	}
	else
		for (i = 0; text_content[i] != '\0'; i++)
			len++;
	a = write(fd, text_content, len);
	if (a == -1)
		return (-1);
	close(fd);

	return (1);
}
