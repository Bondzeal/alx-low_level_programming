#include "main.h"
/**
 * _strlen - Returning the length of a string
 * @s: Character to check
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int d = 0;

	for (; *s++;)
		d++;
	return (d);
}
