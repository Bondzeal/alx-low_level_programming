#include "main.h"

/**
 * _isalpha - Checking for alphabetic character
 * @c: Checking if character exists.
 *
 * Return: 1 if character is a lette lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
