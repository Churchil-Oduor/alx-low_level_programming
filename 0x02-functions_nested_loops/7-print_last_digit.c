#include "main.h"
/**
 * print_last_digit - prints last digit of entered number.
 * @x: is the number passed to the function.
 * Return: returns last digit of a number.
 *
 */
int print_last_digit(int x)
{
	int last;

	if (x < 0)
		x *= -1;

	last = (x % 10);
	_putchar(last + '0');
	return (last);
}
