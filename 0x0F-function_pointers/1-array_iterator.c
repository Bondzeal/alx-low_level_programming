#include "function_pointers.h"

/**
 * array_iterator - Function executes a function given as a parameter
 * on each element of an array
 * @array: An array to iterate over
 * @size: Given size of the array
 * @action: Pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (!array || !action)
		return;

	for (m = 0; m < size; m++)
		action(array[m]);
}
