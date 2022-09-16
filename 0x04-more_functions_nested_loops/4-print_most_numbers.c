#include "main.h"

/**
 * print_most_numbers - fx that prints numbers 0 - 9 except 2 and 4
 * Return: Returns zero
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = 48 ; ch < 58 ; ch++)
	{
		if(ch == 50 || ch == 52)
		{
			continue;
		}
		else
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
