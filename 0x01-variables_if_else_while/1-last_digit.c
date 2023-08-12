#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main: entry point
 *
 * Return: Alwyas 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %d is %d\n and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d\n and is 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d\n and is less than 6 and not 0\n", n, m);

	return (0);
}
