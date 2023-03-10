#include "main.h"
/**
 * _memcpy - copying memory area
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: location to copy memory to
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
