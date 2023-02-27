#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: Character to check
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int string = 0, a;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		a = (string - 1) / 2;
	else
		a = (string / 2);
	a++;

	for (string = a; str[string] != '\0'; string++)
		_putchar(str[string]);
	_putchar('\n');
}
