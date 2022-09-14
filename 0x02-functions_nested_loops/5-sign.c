#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: is the int value passed to be tested
 * Return: Returns the sign of a number
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
	}
	else if (n < 0)
	{
		sign = -1;
	}
	else
	{
		sign = 0;
	}

	return (sign);
}
