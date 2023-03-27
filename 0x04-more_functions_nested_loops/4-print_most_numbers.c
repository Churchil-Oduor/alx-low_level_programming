#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 followed by newline.
 * Return: void function.
 */

void print_most_numbers(void)
{
	int num;

	num = '0' + -1;
	while (num++ < ('0' + 9))
	{
		if (num != ('0' + 2) && num != ('0' + 4))
			_putchar(num);
	}
	_putchar('\n');
}
