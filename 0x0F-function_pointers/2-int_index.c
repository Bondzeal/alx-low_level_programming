#include "function_pointers.h"

/**
 * int_index - Function searches for an integer
 * @array: Given array to search in
 * @size: Number of elements in the array
 * @cmp: A pointer to the function used to compare values
 *
 * Return: index of the first element for which
 * the @cmp function does not return 0, or -1 if no match is found
 * or size is negative
 * If size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array && cmp)
	{
		for (m = 0; m < size; m++)
		{
			if (cmp(array[m]) != 0)
				return (m);
		}
	}

	return (-1);
}
