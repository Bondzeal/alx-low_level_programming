#include "main.h"

/**
 * _strstr - Locating a substring
 * @needle: first substring occurrence
 * @haystack: location of string to find first occurrence
 *
 * Return: A pointer to the beginning lf the located substring,
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
