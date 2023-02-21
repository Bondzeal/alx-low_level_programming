#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 */

void print_alphabet_x10(void)
{
	char lowercase;
	int i = 0;

	while (i < 10)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}

		_putchar('\n');
		
		i++;
	}
}
