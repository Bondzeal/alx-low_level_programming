#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @size: size of memory to print
 * @nmemb: memory allocator for array
 *
 * Description: the @_calloc function allocates memory for an array of
 * @nmemb elements of @size bytes each and returns a pointer
 * to the allocated memory
 * Return: NULL if nmemb or size equals 0,
 * NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *f;
	unsigned int a;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	f = malloc(nmemb * size);
	if (f == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		f[a] = 0;
	return (f);
}
