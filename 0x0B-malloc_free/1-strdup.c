#include "main.h"

/**
 * _strdup - Function retruns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: String/char to be allocated
 *
 * Return: NULL if str = NULL, on success returns a pointer to the
 * duplicated string, otherwise returns NULL if insufficient memory
 * was available
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int a, b = 0;

	if (str == NULL)
		return (NULL);

	while (str[b] != '\0')
		b++;

	duplicate = (char *)malloc((sizeof(char) * b) + 1);

	if (duplicate == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
		duplicate[a] = str[a];
	duplicate[b] = '\0';

	return (duplicate);
}
