#include "main.h"

/**
 * factorial - Function returns the factorial of a given number
 * @n: given number
 *
 * Return: the factorial of a given number, -1 if n < 0 to indicate error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * facctorial(n - 1));
}
