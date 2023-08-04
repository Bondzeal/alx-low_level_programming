#include "main.h"

/**
 * _strchr - Locatingg a character in a string
 * @c: First occurrence of character
 * @s: string to check
 *
 * Return: A pointer to c in the string s, or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
