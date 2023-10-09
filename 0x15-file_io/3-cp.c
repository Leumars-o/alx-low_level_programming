#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * error_msg - function that handles error message calls
  * @err_code: Specific error code to be called
  * @file_from: Pointer to name of file we are copying from
  * @file_to: Pointer to name of file we're to copy the other file
  * contents to
  * @fd_value: Integer value representing the status of the fd operation
  * Return: Void
  */
void err_msg(int err, const char *file_from, const char *file_to, int fd_val)
{
	if (err == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from, file_to\n");
		exit(97);
	}
	else if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	else if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", file_to);
		exit(99);
	}
	else if (err == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_val);
		exit(100);
	}
}

/**
  * create_buffer - function pointer that creates a pointer of size 1024 bytes
  * @file: pointer to the name of the file the buffer is storing characters to
  * Return: A buffer
  */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		err_msg(99, 0, file, 0);
	return (buffer);
}

/**
  * main - main function, that copies the content of a file to another file
  *
  * @argc: argument counter
  * @argv: pointer to array of arguments passed
  *
  * Return: 0 on success,
  * exit code 97 if the argument count is incorrect,
  * exit code 98 if file_from does not exit or cannot be read,
  * exit code 99 if file_to cannot be created or written to
  * exit code 100 if file_to or file_from connot be closed
  */
int main(int argc, char *argv[])
{
	char *buffer;
	int from, to, r, w;

	if (argc != 3)
		err_msg(97, 0, 0, 0);

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (1)
	{
		if (from == -1 || r == -1)
		{
			free(buffer);
			err_msg(98, argv[1], NULL, 0);
		}
		if (r == 0)
			break;

		w = write(to, buffer, r);

		if (to == -1 || w == -1)
		{
			free(buffer);
			err_msg(99, NULL, argv[2], 0);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	if (close(from) == -1)
		err_msg(100, NULL, NULL, from);
	if (close(to) == -1)
		err_msg(100, NULL, NULL, to);

	return (0);
}
