#include <stdio.h>

/**
 * main - prints all the arguments passed to it except the
 * name of the program.
 * @argc: total number of arguments passed.
 * @argv: string array containing arguments passed.
 * Return: 0 if success else another number.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
