#include "main.h"

/**
 * _atoi - Function converts string to an integer
 * @s: String taken into consideration
 *
 * Return: Always 0 (success)
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int num = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);
	return (n);
}
