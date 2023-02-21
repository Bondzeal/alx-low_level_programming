#include "main.h"

/**
 * _islower - checks if letter c is in lowercase
 * @c: checks if letter c exists
 *
 * Return: 1 if letter c is in lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
