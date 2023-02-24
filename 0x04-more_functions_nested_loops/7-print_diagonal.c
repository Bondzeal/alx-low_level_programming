#include "main.h"

/**
 * print_diagonal - Printing a diagonal line on the terminal
 * @n: variable to input
 * Return: void
 */

void print_diagonal(int n)i
{
	int b, e;

	if (n <= 0)
		_putchar('\n');
	for (b = 0; b < n; b++)
	{
		for (e = 0; e < b; e++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
