#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed by newline.
 * Return: void function.
 */

void print_numbers(void)
{
	int num;

	num = 47;
	while (num++ < 57)
		_putchar(num);
	_putchar('\n');
}
