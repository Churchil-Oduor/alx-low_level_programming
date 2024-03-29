#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user.
 *
 * @s: operator.
 *
 * Return: pointer to the correct function selected by user.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i;

	i = 0;
	if (s[0] == '+' || s[0] == '-' || s[0] == '*' ||
			s[0] == '/' || s[0] == '%')
	{
		while (s[0] != ops[i].op[0])
			i++;
		return (ops[i].f);
	}
	return (NULL);
}
