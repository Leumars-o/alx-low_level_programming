#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * error_msg - function that prints out error messages
  *
  * Return: void
  */
void error_msg(const int err, char **argv, int fd_val)
{
	if (err == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	if (100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_val);
		exit(100);
	}
}
/**
  * buffer - function that creates a buffer
  *
  * Return: buffer of size 1024
  */
char *create_buffer(char **argv)
{
	char *buffer;
	
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		error_msg(99, argv, 0);
	return (buffer);
}
/**
  * main - program that copies the content of a file to another file
  *
  * Return:
  */
int main (int argc, char **argv)
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
		error_msg(97, argv, 0);

	from = open(argv[1], O_RDONLY);
	buffer = create_buffer(argv);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (1)
	{
                  if (from == -1 || r == -1)
                  {
                          free(buffer);
                          error_msg(98, argv, 0);
                  }
                  if (r == 0)
                          break;
 
                  w = write(to, buffer, r);
 
                  if (to == -1 || w == -1)
                  {
                          free(buffer);
                          error_msg(99, argv, 0);
                  }
                  r = read(from, buffer, 1024);
                  to = open(argv[2], O_WRONLY | O_APPEND);
          }
          free(buffer);
          if (close(from) == -1)
                 error_msg(100, argv, from);
         if (close(to) == -1)
                 error_msg(100, argv, to);

         return (0);
}
	
