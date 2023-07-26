#include "main.h"

/**
 * _strcat - Function concatenates two strings
 * @dest: Resulting string
 * @src: String appended to @dest
 *
 * Return: A pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	char *r = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (r);
}
