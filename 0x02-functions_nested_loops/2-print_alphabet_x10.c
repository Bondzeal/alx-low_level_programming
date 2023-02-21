#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
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
