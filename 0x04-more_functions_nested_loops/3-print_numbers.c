#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: returns zero
 */

void print_numbers(void)
{
	char ch;

	for (ch = 48 ; ch < 58 ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
