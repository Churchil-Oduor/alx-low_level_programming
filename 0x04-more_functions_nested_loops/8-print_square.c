#include "main.h"
/**
 * print_square - prints a square.
 * @size: refers to the dimensions of the square.
 * Return: is a void function.
 */
void print_square(int size)
{
	int length, width;

	width = -1;
	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			width = -1;
			while (++width < size)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
