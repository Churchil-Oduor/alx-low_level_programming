#include "main.h"
/**
 * print_line - prints a line @n times long followed by a newline.
 * @n: is the length of the line to be printed.
 * Return: void function.
 */
void print_line(int n)
{
	int count;

	count = 0;
	while (count++ < n)
		_putchar('_');
	_putchar('\n');
}
