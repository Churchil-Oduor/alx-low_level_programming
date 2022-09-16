#include "main.h"

/**
 * print_line - fx that prints line
 * @c: is the passed parameter indicating the extent of line
 * Return: void fx
 */

void print_line(int n)
{
	int i;

	if(n =< 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
}
