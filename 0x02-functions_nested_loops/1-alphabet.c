#include "main.h"

/**
 * print_alphabet - Function prints alphabets in lowercase
 *
 * Return: Always 0(Success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
