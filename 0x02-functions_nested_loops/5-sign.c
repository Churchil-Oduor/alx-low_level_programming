#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Return: Returns the sign of a number
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
		sign = 1;
	else if (n == 0)
		sign = 0;
	else
		sign = -1;

	return (sign);
}
