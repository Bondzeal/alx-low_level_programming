#include "main.h"

/**
 * puts_half - Function prints half of a string
 * @str: String to be printed
 *
 * Return: Second half of the string, if
 * number of characters is odd, fxn prints the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int s = 0, n;

	while (str[s] != '\0')
		s++;

	if (s + 1 % 2 != '0')
		n = (s - 1) / 2;
	else
		n = (s / 2);
	n++;

	for (s = n; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}

	_putchar('\n');
}
