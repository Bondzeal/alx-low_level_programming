#include <stdlib.h>
#include "main.h"

/**
 * count_word - Function counts the number of words in a string
 * @s: Structing take into consideration
 * Return: Total number of words
 */

int count_word(char *s)

{
	int flag, mac, mal;

	flag = 0;
	mal = 0;
	for (mac = 0; s[mac] != '\0'; mac++)
	{
		if (s[mac] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			mal++;
		}
		return (mal);
	}

/**
 **strtow - Function splits strings into words
 * @str: String to split
 * Return: On success, a pointer to an array of strings
 * or on error NULL
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}
