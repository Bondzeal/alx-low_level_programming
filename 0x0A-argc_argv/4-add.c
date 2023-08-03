#include "main.h"
#include "string.h"
#include <ctype.h>

/**
 * check_num - Function checks if strings are digits
 * @str: Array of strings
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* count string */
	{
		if (!isdigit(str[count])) /* check if strings are digits */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Function adds two numbers
 * @argc: Number of arguments
 * @argv: AArray of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			/* ATOI convert string to int */
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
