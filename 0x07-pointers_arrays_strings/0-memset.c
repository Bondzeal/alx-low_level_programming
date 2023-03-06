#include "main.h"
/**
 * _memset - This is a function that fills memory with a contant byte
 * @n: Number of bytes to fill (Memory area points to s)
 * @s: This is the location to fill
 * @b: Constant byte that is used to fill memory
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
