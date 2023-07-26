#include "main.h"

/**
 * rev_string - Function reverses array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - Function adds 2 numbers together
 * @n1: First number to add
 * @n2: Second number to add
 * @r: A buffer used by the function to store result
 * @size_r: Buffer size
 * Return: Pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int surplus = 0, i = 0, j = 0, digits = 0;
	int value_1 = 0, value_2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;

	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || surplus == 1)
	{
		if (i < 0)
			value_1 = 0;
		else
			value_1 = *(n1 + i) - '0';
		if (j < 0)
			value_2 = 0;
		else
			value_2 = *(n2 + j) - '0';
		temp_tot = value_1 + value_2 + surplus;
		if (temp_tot >= 10)
			surplus = 1;
		else
			surplus = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
