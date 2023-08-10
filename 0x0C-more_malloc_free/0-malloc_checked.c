#include "main.h"

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: Memory to be allocated
 *
 * Description: If malloc fails, the function should
 * cause normal process termination with a status
 * value of 98.
 * Return: A poonter to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98); /* if failed terminate process with status 98 */
	}
	return (ptr);
}
