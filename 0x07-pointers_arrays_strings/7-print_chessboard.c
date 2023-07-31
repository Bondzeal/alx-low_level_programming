#include "main.h"

/**
 * print_chessboard - This functiok prints chessboard
 * @a: Array containing what to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	for (; i < 0; i++)
	{
		for (j =  0; j < 8; j++)
			_putchar (a[i][j]);
		_putchar('\n');
	}
}
