#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: destination and resulting string
 * @src: string source
 * @n: number of bytes to concatenate
 *
 * Return: A pointer to the resulting string, dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

/* i is the null terminator index */
	while (dest[i] != '\0')
		i++;
/* Null terminating replacement by append ie src string */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
