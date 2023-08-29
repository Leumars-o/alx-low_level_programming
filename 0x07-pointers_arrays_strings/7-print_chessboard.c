#include "main.h"

/**
  * print_chessboard - function to print chess board
  *
  * Description: Function prints chess board
  *
  * @a: Pointer to array
  *
  * Return: void;
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
