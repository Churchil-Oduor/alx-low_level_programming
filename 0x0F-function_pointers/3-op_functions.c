#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds a and b.
 *
 * @a: first int  argument.
 * @b: second int argument.
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a.
 *
 * @a: 1st int argument.
 * @b: 2nd int argument.
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b.
 *
 * @a: 1st arg.
 * @b: 2nd arg.
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b.
 *
 * @a: 1st arg.
 * @b: 2nd arg.
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - computes remainder of dividing a by b.
 *
 * @a: 1st arg.
 * @b: 2nd arg.
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
