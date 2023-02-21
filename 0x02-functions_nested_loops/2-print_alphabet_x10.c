#include "main.h"

/**
 * print_alphabet_x10 - Printing a to z 10 times in lowercase.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
