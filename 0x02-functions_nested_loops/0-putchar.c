#include "main.h"

/**
 * main - Program prints '_putchar' followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
		_putchar(ch[num]);
	_putchar('\n');

	return (0);
}
