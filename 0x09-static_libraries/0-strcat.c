#include "main.h"
/**
 * _strcat - Concatinating two strings
 * @dest: string that will be overwritten
 * @src: string to append and added
 *
 * Return: A pointer to the resulting string dest
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

	return (r);
}
