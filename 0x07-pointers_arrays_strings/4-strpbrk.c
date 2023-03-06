#include "main.h"
/**
 * _str	pbrk - Searching for any set of bytes
 * @s: first occurence in string, ie, string to search for
 * @accept: bytes in the string to be searched for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in @accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (NULL);
}
