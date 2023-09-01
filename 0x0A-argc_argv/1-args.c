#include "main.h"
#include <stdio.h>

/**
  * main - entry point
  *
  * Description: function that prints the number of arguments
  * passed to it
  *
  * @argc: arument count
  * @argv: argument array
  *
  * Return: Always 0 - success
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
