#include "main.h"
/**
 * cap_string - Capitalize all words of a string
 * @s: String to manipulate
 *
 * Return: Altered string with all words capitalized
 */

char *cap_string(char *s)
{
	int i, j;
	char sc[] = " \t\n,;.!?\"(){}";

	v = s + i;
	while (*v)
	{
		if (*v >= 'a' && *v <= 'z')
		{
			if (i == 0)
				*v -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (sc[j] == *v - 1)
						*v -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
