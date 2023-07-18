#include "main.h"

/**
 * print_times_table - Print the times table, starting with 0.
 * @n: The value of the times table to be printed
 */

void print_times_table(int n)
{
	int i, j, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar(48);
			for (j = 1; j <= n; ++j)
			{
				_putchar(',');
				_putchar(' ');

				i = num * j;

				if (i <= 9)
					_putchar(' ');
				if (i <= 99)
					_putchar(' ');
				if (i >= 100)
				{
					_putchar((i / 100) + 48);
					_putchar((i / 10) % 10 + 48);
				}
				else if (i <= 99 && i >= 10)
					_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
