#include "3-calc.h"

/**
 * get_op_func - Function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: Operator input by the user
 *
 * Return: A pointer to the function that corresponds to the
 * operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int m;

	m = 0;

	while (ops[m].op)
	{
		if (strcmp(ops[m].op, s) == 0)
			return (ops[m].f);
		m++;
	}

	return (NULL);
}
