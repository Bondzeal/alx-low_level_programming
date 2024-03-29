#include "variadic_functions.h"

/**
 * print_strings - Function prints strings, followed by new line
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: Variadic function
 *
 * Description: If @separator = NULL, do not print it
 * If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int m;

	va_start(strings, n);
	for (m = 0; m < n; m++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);
		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
