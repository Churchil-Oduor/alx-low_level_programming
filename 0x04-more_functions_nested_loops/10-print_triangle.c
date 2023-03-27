#include "main.h"
/**
 * print_triangle - prints triangle.
 * @size: dimensions of the triangle to be printed.
 * Return: void function.
 */
void print_triangle(int size)
{
	int height, base;

	height = size;
	if (size > 0)
	{
		while (height > 0)
		{
			for (base = 0; base < size; base++)
			{
				if (base >= (height - 1))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
			--height;
		}
	}
	else
	{
		_putchar('\n');
	}
}

