#include "main.h"

/**
 * main - Print the name of a program followed by a new line
 * @argc: Number of arguments
 * @argc: Array of arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return EXIT_SUCCESS;
}
