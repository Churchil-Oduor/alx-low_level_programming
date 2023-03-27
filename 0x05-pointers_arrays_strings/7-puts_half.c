
#include "main.h"

/**
 * puts_half - prints the last half of string passed.
 * @str: string passed.
 * Return: void function.
 */

void puts_half(char *str)
{
	int count, divide;

	count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}

	if (count % 2 != 0)
		divide = (count / 2) + 1;
	else
		divide = count / 2;

	while (divide != count)
	{
		_putchar(*(str + divide));
		++divide;
	}

	_putchar('\n');
}
