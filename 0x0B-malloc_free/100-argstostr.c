#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: input character
 * @av: double pointer array
 *
 * Return: NULL if @ac is equal to 0 or @ac equals NULL, otherwise
 * returns a pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0, l = 0;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	l += ac;

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[i] = av[i][j];
			k++;
		}

		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
