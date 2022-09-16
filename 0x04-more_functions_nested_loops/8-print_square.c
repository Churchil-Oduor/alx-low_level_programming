#include "main.h"

/**
 * print_square - fx that prints square
 * @size: passed parm representing the size of square
 * Return: void fx
 */

void print_square(int size)
{
	int l, w;
	int i;

	for (i = 0 ; i < size ; i++)
	{
		for (w = 0 ; w < size ; w++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
