#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Description: Array created should contain all values from min to max.
 * ordered from min to max
 * Return: the pointer to the newly created array,
 * NULL if min > max, NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i, len = 0;

	if (min > max)
		return (NULL);

	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		pointer[len] = i;
		len++;
	}

	return (pointer);
}
