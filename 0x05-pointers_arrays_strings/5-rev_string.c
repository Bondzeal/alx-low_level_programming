#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Character to check
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int a, b, c;
	char d;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b > c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
