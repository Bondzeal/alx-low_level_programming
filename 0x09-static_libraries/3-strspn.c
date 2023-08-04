#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: location containing number of bytes in the
 * initial segmen, s
 *
 * Return: Number of bytes in the initial segment whoch consists
 * of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int g, e;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] != 32)
		{
			for (e = 0; accept[e] != '\0'; e++)
			{
				if (s[g] == accept[e])
					a++;
			}
		}
		else
			return (a);
	}
	return (a);
}
