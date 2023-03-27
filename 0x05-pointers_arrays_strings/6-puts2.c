#include "main.h"

/**
 * puts2 - selects only even numbers.
 * @str: character entered.
 * Return: void function.
 */

void puts2(char *str)
{
	int count;

	count = 0;

	while (*(str + count) != '\0')
	{
		if (*(str + count) % 2 == 0)
			_putchar(*(str + count));
		++count;
	}

	_putchar('\n');
}
