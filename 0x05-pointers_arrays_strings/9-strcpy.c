#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: Character to check
 * @src: Character to check
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
		dest[b] = src[b];
	dest[b] = '\0';
	return (dest);
}
