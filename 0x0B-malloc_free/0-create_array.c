#include "main.h"

/**
 * create_array - Function creates an array of charss, and initialize it
 * with a specific char
 * @size: Array size
 * @c: Character to be assigned
 *
 * Return: A pointer to the array, otherwise NULL if failed
 * NULL if size == 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int u;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == 0)
		return (NULL);

	for (u = 0; u < size; u++)
		str[u] = c;
	return (str);
}
