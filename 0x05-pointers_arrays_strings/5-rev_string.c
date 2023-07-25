#include "main.h"

/**
 * rev_string - Function reverses a string
 * @s: String to be inputted
 *
 * Return: Reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int temp = 0;
	int i;

	while (s[temp] != '\0')
		temp++;

	for (i = 0; i < temp; i++)
	{
		temp--;
		rev = s[i];
		s[i] = s[temp];
		s[temp] = rev;
	}
}
