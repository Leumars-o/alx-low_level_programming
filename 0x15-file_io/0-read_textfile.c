#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - function that reads a text file and prints it to the
  * POSIX standard output
  * @filename: Pointer to file location
  * @letters: number of letters it should read and print
  * Return: The actual number of letters it could read and print,
  * 0 if it fails or is NULL
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t letter_count, p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	letter_count = read(fd, buffer, letters);
	p = write(STDOUT_FILENO, buffer, letter_count);

	free(buffer);
	close(fd);
	return (p);
}
