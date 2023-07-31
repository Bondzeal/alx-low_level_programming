#include "main.h"

/**
 * _strpbrk - Searching a string for any of a set of byte'
 * @s: string to search
 * @accept: location of bytes to be searched for
 *
 * Return: A pointer to the byte @s, which matches one of the bytes
 * in @accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
