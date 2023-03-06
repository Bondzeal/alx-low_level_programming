#include "main.h"
/**
 * _memcpy - Copying memory area
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: location to copy memory to
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest [i] = src[i];

	return (dest);
}
