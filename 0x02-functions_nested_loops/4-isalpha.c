#include "main.h"

/**
 * _isalpha - Checking for alphabetic character
 *
 * Return: 1 if c is either lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
