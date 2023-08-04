#include "main.h"

/**
 * _strcpy - Function copies string pointed to by @src, including the
 * null byte (\0), to the buffer pointed to by @dest
 * @dest: pointer to char that contains copies strings
 * @src: pointer to copy strings from.
 *
 * Return: the pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, a;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
