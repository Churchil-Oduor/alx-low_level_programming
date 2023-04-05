#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to the string passed.
 * Return: void function.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s -= 1;
		_putchar(*s);
		_print_rev_recursion(s
	}
}
