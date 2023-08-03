#include "main.h"

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compvar - comparing every charater of the string
 * @s: string
 * @it1: iterator that is the smallest
 * @it2: bigger iterator
 *
 * Return: void
 */

int compvar(char *s, int it1, int it2)
{
	if (*(s + it1) == *(s + it2))
	{
		if (it1 == it2 || it1 == it2 + 1)
			return (1);
		return (0 + compvar(s, it1 + 1, it2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 *
 * Return: 1 if string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compvar(s, 0, _strlen_recursion(s) - 1));
}
