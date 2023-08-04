#include "main.h"

/**
 * _strncpy - Function copies a string
 * @dest: Destination string
 * @src: String source
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the resulting string, @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
/*Intializing variable */
	i = 0;
/* Using the while loop */
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
