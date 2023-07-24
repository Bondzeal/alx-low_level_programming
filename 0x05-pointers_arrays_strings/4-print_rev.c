#include "main.h"

/**
 * print_rev - Function prints string in reverse
 * @s: String
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int mal;
	int mac = 0;

	while (s[mac] != '\0')
		mac++;

	for (mal = mac - 1; mal >= 0; mal--)
	{
		_putchar(s[mal]);
	}
	_putchar('\n');
}
