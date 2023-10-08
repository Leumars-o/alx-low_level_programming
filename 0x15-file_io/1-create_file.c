#include "main.h"
#include <stdlib.h>

/**
  * create_file - function that creates a file
  * @filename: pointer to name of file to create
  * @text_content: NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, a, i, len = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fd, text_content, len);
	if (fd == -1 || a == -1)
		return (-1);
	close(fd);
	return  (1);
}
