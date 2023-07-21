#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: Print 1 to 100, Fizz for multiples of 3,
 * Buzz for multiples of 5, and FizzBuzz for multiplesof both
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("Fizzbuzz")
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", a);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
~                                                                                 ~                                                                                 ~   
