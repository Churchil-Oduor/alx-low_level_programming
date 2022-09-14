#include "main.h"

/**
 * print_alphabet_x10 - This method prints the alphabet 10x
 * Return: return type is void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ch = 67 ; ch < 237 ; ch++)
		{
			_putchar(ch);
		}
		_putchar(ch);
	}
}
