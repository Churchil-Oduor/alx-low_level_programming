#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it.
 * @argc: is the number of arguments passed to it.
 * @argv: an array holding strings equivalent to the arguments passed.
 * Return: 0 if runs successfully else any other number.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
