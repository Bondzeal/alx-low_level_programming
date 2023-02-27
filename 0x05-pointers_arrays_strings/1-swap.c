#include "main.h"
/**
 * swap_int - Swaps the values of two integers, int a and int b
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always 0 (Success).
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
