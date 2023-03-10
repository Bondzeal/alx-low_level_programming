#include "main.h"
/**
 * _memset - This is a function that fills memory with a constant byte
 * @n: number of bytes to fill (Memory area prints to s)
 * @s: This is the location to fill
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
