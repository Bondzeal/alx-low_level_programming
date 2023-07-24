#include "main.h"

/**
 * _strlen - Function returns the length of a string
 * @s: Given strings characters
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
