#include "main.h"

/**
 * print_diagsums - printing the sums of two diagonals of a sqare matrix
 * @a: square matrix of integers
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, maxsize = size * size, sum1 = 0, sum = 0;

	for (; i < maxsize; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < maxsize - 1; i += size - 1)
		sum += a[i];

	printf("%d, %d\n", sum1, sum2);
}
