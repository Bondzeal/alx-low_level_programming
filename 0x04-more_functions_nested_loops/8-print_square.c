#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int b, e;

	if (size <= 0)
		_putchar('\n');

	for (b = 0; b < size; b++)
	{
		for (e = 0; e < (size); e++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
