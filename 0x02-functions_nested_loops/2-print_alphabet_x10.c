#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 * Return: no return type.
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	count = 0;

	while (count != 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		++count;
	}
}
