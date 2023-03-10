#include "main.h"
/**
 * _puts - Prints a string, followed by a new line
 * @str: The string to print
 *
 * Return: Always 0 (Success).
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
