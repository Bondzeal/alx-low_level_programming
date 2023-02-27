#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: Integer to check
 * @n: Integer to check
 *
 * Return: Always 0 (Success).
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
		if (y != n - 1)
			printf("%d, ", a[y]);
		else
			printf("%d", a[y]);
	printf("\n");
}
