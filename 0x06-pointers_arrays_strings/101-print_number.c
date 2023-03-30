#include "main.h"
#include <stdio.h>
/**
 * print_number - prints the entered number.
 * @n: entered number.
 * Return: void function.
 */

void print_number(int n)
{
	int temp, num_digits, total_val, reversed, count, digit;

	temp = n;
	num_digits = 0;
	total_val = 1;
	reversed = 0;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while ((temp /= 10) != 0)
	{
		total_val *= 10;
		num_digits++;
	}

	for (count = 0; count <= num_digits; count++)
	{
		temp = (n % 10) * total_val;
		reversed += temp;
		n /= 10;
		total_val /= 10;
	}

	do {
		digit = (reversed % 10);
		reversed /= 10;
		_putchar('0' + digit);
	} while (reversed != 0);

}
