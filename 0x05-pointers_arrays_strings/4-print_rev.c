#include "main.h"
/**
 * print_rev - Printing a string in reverse, followed by a new line
 * @s: The string string to be printed
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
