#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print 1 to 100
 *              Print fizz for multiples of 3
 *              Print Buzz for multiples of 5
 *              Print FizzBuzz for multples of both 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("Fizzbuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%a", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
