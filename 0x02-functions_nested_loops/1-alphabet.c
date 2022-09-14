#include "main.h"

/**
 * printChar - this is our function
 * Return: returns 0
 */
void print_alphabet(void)
{
	char ch;
	for (ch = 97 ; ch < 123 ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
