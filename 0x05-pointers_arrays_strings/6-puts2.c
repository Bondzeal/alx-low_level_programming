#include "main.h"

/**
 * puts2 - Function prints every character of a string, starting
 * 	starting with the first character, followed by a new line
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int len, c;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (c = 0; c < len; c += 2)
	{
		_putchar(str[c]);
	}

	_putchar('\n');
}
