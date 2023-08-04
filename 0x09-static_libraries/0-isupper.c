#include "main.h"

/**
 * _isupper - Function checks for uppercase character
 * @c: characted to be checked
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
