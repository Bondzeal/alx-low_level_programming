#include "main.h"

/**
 * _memcpy - Function copies memory area
 * @n: Number of bytes to copy
 * @src: Memory area to copy from
 * @dest: Location to copy memory to
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
