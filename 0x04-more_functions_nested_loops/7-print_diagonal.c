#include "main.h"
/**
 * print_diagonal - draws a diagonal on the terminal.
 * @n: is the length of diagonal to be printed. if @n < 1, prints \n.
 * Return: void function.
 */

void print_diagonal(int n)
{
	int line_count, space;

	for (line_count = 0; line_count < n; line_count++)
	{
		space = 0;
		while (space++ < line_count)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
