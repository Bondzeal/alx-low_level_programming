#include "main.h"
#define ERR_MSG "Error"

/**
 * is_digit - Function checks if a string contains a non-digit char
 * @s: string to be checked
 * Return: 0 if a non-digit is found, otherwise 1
 */

int is_digit(char *s)
{
	int actual_num = 0;

	while (s[actual_num])
	{
		if (s[actual_num] < '0' || s[actual_num] > '9')
			return (0);
		actual_num++;
	}
	return (1);
}

/**
 * _strlen - Function returns the length of a string
 * @s: string to be evaluated
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * errors - Function handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Function multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || !is_digit(num1) || !is_digit(num2))
		errors();
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
