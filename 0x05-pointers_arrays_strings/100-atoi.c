#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The pointer to convert
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	int b = 0;
	unsigned int ni = 0;
	int emm = 1;
	int eny = 0;

	while (s[b])
	{
		if (s[b] == 45)
		{
			emm *= -1;
		}

		while (s[b] >= 48 && s[b] <= 57)
		{
			eny = 1;
			ni = (ni * 10) + (s[b] - '0');
			b++;
		}

		if (eny == 1)
		{
			break;
		}

		b++;
	}

	ni *= min;
	return (ni);
}
