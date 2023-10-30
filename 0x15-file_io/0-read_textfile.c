#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/**
  * read_textfile - function that reads a text file
  * and prints it to the POSIX standard output
  * @filename: pointer to file location
  * @letters: number of letters it should read and print
  * Return: the actual number of letters it could read and print
  * 0 otherwise
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer = NULL;
	ssize_t letter_count, p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	letter_count = read(fd, buffer, letters);
	if (letter_count == -1)
		return (0);
	p = write(STDOUT_FILENO, buffer, letter_count);
	free(buffer);
	close(fd);
	return(p);
}
