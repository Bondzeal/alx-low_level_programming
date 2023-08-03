#include "main.h"

/**
 * checkprime - checks if integer is a prime number
 * @a: input integer
 * @b: input integer
 * Return: value of integer
 */

int checkprime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a < b / 2)
		return (1);
	else
		return (checkprime(a + 1, b));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input integer
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checkprime(2, n));
}
