#include "3-calc.h"

/**
 * op_add - Function calculates the sum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function calculates the difference between two
 * given integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function calculates the product of two
 * given integers
 * @a: First integer
 * @b: Second integer
 *
 * Return:The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function calculates the division of two
 * given integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function calculates the remainder of the division of two
 * given integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of what is left (remainder)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
