#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase.
 * Return: has no return type.
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
