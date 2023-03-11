#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * argc: integer representing argument count
 * @argv: array of strings that contains the command-line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
