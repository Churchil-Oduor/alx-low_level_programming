#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies arguments passed to it.
 * @argc: number of arguments passed to the program.
 * @argv: string array with @argc items.
 * Return: 0 if success else any number.
 */

int main(int argc, char *argv[])
{
	int count, mult;

	if (argc > 1)
	{
		mult = 1;
		for (count = 1; count < argc; count++)
		{
			mult *= atoi(argv[count]);
		}

		printf("%d\n", mult);

	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
