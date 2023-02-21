#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char print[] = "_putchar";
	int number;

	for (number = 0; number < 8; number++)
		_putchar(print[]);
	_putchar('\n');

	return (0);
}
