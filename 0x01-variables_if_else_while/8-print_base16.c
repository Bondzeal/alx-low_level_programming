#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char lowercase;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
		putchar(lowercase);
	putchar('\n');

	return (0);
}
