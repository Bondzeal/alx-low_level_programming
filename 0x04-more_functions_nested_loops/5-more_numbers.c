#include "main.h"

/**
 * more_numbers - Printing 10 times the numbers from 0 - 14
 * j stands for rows ie number of lines to print
 * k stands for exact numbers to print from 0 - 14
 */

void more_numbers(void)
{
	int j, k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_putchar('1');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
