#include "variadic_functions.h"

/**
 * sum_them_all - Function returns the sum of all its parameters
 * @n: Number of arguments passed
 *
 * Return: The resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (m = 0; m < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
