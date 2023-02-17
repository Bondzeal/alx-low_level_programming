#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Assigning 'a' as initital alphabet */
	char alphabet;
	alphabet = 'a';
	putchar("Lowercase alphabets:\n");

	while(alphabet <= 'z') 
	{
		putchar("%c",alphabet);
		alphabet ++;
	}
	return (0);
}
