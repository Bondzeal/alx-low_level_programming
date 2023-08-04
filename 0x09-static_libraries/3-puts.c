#include "main.h"

/**
 * _puts - Function prints a string, followed by a new line
 * @str: String being printed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int mal = 0;

	while (str[mal] != '\0')
	{
		_putchar(str[mal]);
		mal++;
	}
	_putchar('\n');
}
