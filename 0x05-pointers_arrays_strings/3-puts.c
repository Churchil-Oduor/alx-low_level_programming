#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: string to be printed.
 * Return: void function.
 */

void _puts(char *str)
{
	int count;

	count = 0;

	while (*(str + count++) != '\0')
		_putchar(*(str + count - 1));
	_putchar('\n');
}
