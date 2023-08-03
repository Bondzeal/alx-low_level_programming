#include "main.h"

/**
 * _atoi - Function converts strings to integers
 * @s: String to be converted
 *
 * Return: Converted string to integer
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - Function multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success), otherwise 1 (Error)
 */

int main(int argc, char *argv[])
{
	int m, c, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	m = _atoi(argv[1]);
	c = _atoi(argv[2]);
	result = m * c;

	printf("%d\n", result);

	return (0);
}
