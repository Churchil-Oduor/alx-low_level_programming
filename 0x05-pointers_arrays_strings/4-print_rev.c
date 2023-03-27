#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: String to be reversed.
 * Return: void function.
 */

void print_rev(char *s)
{
	int num_char;

	num_char = 0;

	while (*(s + ++num_char) != '\0');
	while (num_char-- != 0)
		_putchar(*(s + num_char));

	_putchar('\n');
}
