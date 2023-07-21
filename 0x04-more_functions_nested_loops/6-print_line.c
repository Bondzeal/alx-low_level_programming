#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
