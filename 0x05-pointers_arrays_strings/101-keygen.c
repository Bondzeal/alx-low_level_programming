#include "main.h"

/**
 * main - Program generates random valid passwords for program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pass[100];
	int a, sum, c;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			c = 2772 - sum - '0';
			sum += c;
			putchar(c + '0');
			break;
		}
	}

	return (0);
}
