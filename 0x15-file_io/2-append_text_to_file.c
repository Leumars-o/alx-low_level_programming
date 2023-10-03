#include "main.h"
#include <stdlib.h>

/**
  * append_text_to_file - functin that appends text at the end of a file
  * @filename: pointer to file we wish to append
  * @text_content: pointer to string to append
  * Return: 1 on success, -1 otherwise
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
