#include "main.h"
/**
 * reverse_array - Reversing the content of an array of integers
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
