#include "function_pointers.h"

/**
 * print_name - Function prints a name
 * @name: Name to be printed
 * @f: Pointer to the function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
