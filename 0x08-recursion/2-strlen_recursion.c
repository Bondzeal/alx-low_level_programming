#include "main.h"

/**
 * _strlen_recursion - Function returns length of string
 * @s: string to check
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
