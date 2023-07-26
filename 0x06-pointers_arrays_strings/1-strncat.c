#include "main.h"

/**
 * _strncat - Function concatenates two strings
 * @dest: Destination and resulting string
 * @src: String source
 * @n: Number of bytes to concatenate
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
/* Null terminating replacement by append is src string */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
