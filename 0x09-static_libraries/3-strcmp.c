#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: comparing first string
 * @s2: comparing second string
 *
 * Return: An integer less than, equal to, or greater than 0 if,
 * s1 (or the first n bytes ghereof) is found, respectively, to be
 * less than, to match, or be greater than s2)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
