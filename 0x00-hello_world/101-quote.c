#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: gives 1
 */
int main(void)
{
	const char message[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t lenght = sizeof(message) - 1;

	fwrite(message, sizeof(char), lenght, stderr);

	return (1);
}
