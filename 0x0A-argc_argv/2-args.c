#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  *
  * Description: function that prints all arguments it recieves
  *
  * @argc: arument count
  * @argv: argument array
  *
  * Return: Always 0 - success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
