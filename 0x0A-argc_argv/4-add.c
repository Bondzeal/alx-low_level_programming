#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * checkfornum - checks string if a number exists
 * @str: array string
 *
 * Return: Always 0 (Success)
 */

int checkfornum(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print name of program
 * @argc: count arguments
 * @argv: array arguments
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
		if (checkfornum(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum = sum + str_to_int;
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
