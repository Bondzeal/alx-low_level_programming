#include "main.h"

/**
 * string_nconcat - Comcatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes for @s2
 *
 * Description: Returned pointer shall point to a newly
 * allocated space in memory, which contains @s1,
 * followed by first n bytes of @s2 and null terminated
 * If NULL is passed, treat it as empty string
 * if n >= lens2 then use s2
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, lens1 = 0, lens2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;

	if (n >= lens2)
		n = lens2;

	str = malloc(sizeof(char) * (n + lens1 + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[i + lens1] = s2[i];

	str[i + lens1] = '\0';
	return (str);
}
