#include <stdio.h>

/**
 * main - program that prints its own name.
 * @argc: number of strings passed to main function.
 * @argv: vector containg @argc number of strings.
 * Return: 0 if executes successfully else another number.
 */

int main(int argc, char *argv[])
{
	int count;
	char *prog_name;

	prog_name = argv[0];
	(void)argc;

	for (count = 0; prog_name[count] != '\0'; count++)
		printf("%c", prog_name[count]);

	printf("\n");
	return (0);
}
