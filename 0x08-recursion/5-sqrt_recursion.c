#include "main.h"

/**
 * power_operation - Functin returns the natural square root of a number
 * @n: input number
 * @i: iterator
 *
 * Return: -1 if n does not have square root
 */

int power_operation(int n, int i)
{
	if (i % (n / i) == n)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power_operation(n, i + 1));
}

/**
 * _sqrt_recursion - Function returns the natural square root of a number
 * @n: input number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
