#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: size in bytes, of the allocated space for @ptr
 * @new_size: new size in bytes of the new memory block
 * Description: The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the
 * minimum of the old and new sizes
 * If new_size < old_size, added memory should not be initiliazed
 * If new_size == old_size, do not do anything and return ptr
 * If ptr == NULL,call is == malloc(new_size), for all values
 * of old_size and new_size
 * If new size == 0, ptr != NULL, call is == free(ptr)
 *
 * Return: ptr if new_size > old_size,
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	char *old = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		arr[i] = old[i];

	free(old);
	return (arr);
}
