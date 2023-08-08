#include "main.h"

/**
 * str_concat - Function concatenates two strings
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Return: A pointer to a newly allocated space in memory,
 * and contains the constants of @s1, followed by @s2 and
 * @s2 and nul terminated, and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	con = malloc(sizeof(char) * (i + j + 1));

	if (con == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		con[i] = s2[j];
		i++, j++;
	}

	con[i] = '\0';

	return (con);
}
