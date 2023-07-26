#include "main.h"

/**
 * rot13 - Function encodes a string using rot13
 * @s: String that is to be encoded
 *
 * Return: Resulting string
 */

char *rot13(char *s)
{
	int i, j;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char betalpha[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; alphabet[j] != '\0'; j++)
	{
		if (s[i] == alphabet[j])
		{
			s[i] = betalpha[j];
			break;
		}
	}
	}

	return (s);
}
