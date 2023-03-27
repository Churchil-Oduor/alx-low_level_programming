#include "main.h"

/*
 * print_sign - checks the sign of entered number.
 * @n: is the number whose sign has to be verified.
 * Return: return 1 if n is > 0,
 * 	  returns 0 if n is zero,
 * 	  returns -1 if n is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
