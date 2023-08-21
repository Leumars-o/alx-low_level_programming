#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - program that generates random valid passwords for the program
  * 101-crackme
  *
  * Return: Always 0
  */
int main(void)
{
	int pass[100];
	int i, j, sum;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 85;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((2772 - sum) - '0' < 85)
		{
			j = 1555 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	putchar('\n');
	return (0);
}
