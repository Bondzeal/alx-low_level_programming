#include "main.h"

/**
 * print_array - Function prints n elements of an array of integers
 * @n: Number of elements of the array to be printed
 * @a: Integer to be checked
 *
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int mal;

	for (mal = 0; mal < n; mal++)
	{
		if (mal != n - 1)
		printf("%d, ", a[mal]);

		else
			printf("%d", a[mal]);
	}

	printf("\n");
}
