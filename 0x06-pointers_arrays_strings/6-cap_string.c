#include "main.h"

/**
 * cap_string - Function apitalize all words of a string
 * @s: String to manipulate
 *
 * Return: Altered string with all words capitalized
 */

char *cap_string(char *s)
{
	int i, j;

	char sc[13] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == sc[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
