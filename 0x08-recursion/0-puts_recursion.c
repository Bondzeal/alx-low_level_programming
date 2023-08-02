#include "main.h"

/**
 * _puts_recursion - Function prints a string followed by a new line
 * @s: Character string put into consideration
 *
 * Return: String
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
