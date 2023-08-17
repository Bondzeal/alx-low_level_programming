#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list val;
	int m = 0, c = 0;
	char *sep = ", ";
	char *str;

	va_start(val, format);

	while (format && format[c])
		c++;

	while (format && format[m])
	{
		if (m  == (c - 1))
		{
			sep = "";
		}
		switch (format[m])
		{
		case 'c':
			printf("%c%s", va_arg(val, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(val, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(val, double), sep);
			break;
		case 's':
			str = va_arg(val, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		m++;
	}
	printf("\n");
	va_end(val);
}
