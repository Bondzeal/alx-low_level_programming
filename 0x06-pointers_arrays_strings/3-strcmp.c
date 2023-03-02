#include "main.h"
/**
 * _strcmp - Comparing two strings
 * @s1: Comparing first string
 * @s2: Comparing second string
 *
 * Return: An integer less than, equal to, or greater than 0 if,
 * s1 (or the first n bytes thereof) is found, respectively, to be
 * less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
/* This is to return 0 if both strings are equal */
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
/* This is to say that if both strings are mot equal, then continue to print something else */
	else
	{
		return (*s1 - *s2);
	}

}
