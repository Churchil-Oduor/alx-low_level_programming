#include <stdio.h>
#include "main.h"
/*
 * print_to_98 - prints the number entered to 98.
 * @x: entered number.
 * Return: has no return type.
 */
void print_to_98(int x)
{
	int num;

	if (x < 98)
	{
		printf("%d", x);
		for (num = ++x; num <= 98; num++)
		{
			printf(",");
			printf(" ");
			printf("%d", num);

		}
		printf("\n");
	}
	else
	{
		printf("%d", x);
		for (num = --x; num > 97; num--)
		{
			printf(",");
			printf(" ");
			printf("%d", num);
		}
		printf("\n");
	}
}
