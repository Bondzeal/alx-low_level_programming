#include "main.h"

/**
 * _memset - FUnction fills memory with a constant byte
 * @s: Location to fill
 * @n: Number of bytes to fill (Memory area points to s)
 * @b: Constant byte that is used to fill memory
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
