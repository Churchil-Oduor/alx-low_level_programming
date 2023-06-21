#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - entry point of function.
 *
 * @argv: array of arguments.
 * @argc: number of arguments passed.
 *
 * Return: Always 0;
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	if (argv[2][0] == '+' || argv[2][0] == '-' ||
			argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%')
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2];

		printf("%d\n", get_op_func(op)(a, b));
		return (0);
	}

	printf("Error\n");
	exit(99);
}
