#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 *
 * Return: int converted from string
 */

int _atoi(char *s)
{
	int a = 0, b = 0, n, len = 0, d = 0, digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			d = 1;

			if (s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (n);
}

/**
 * main - multiplying 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
