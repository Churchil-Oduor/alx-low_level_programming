#include "main.h"

/**
 * print_number - prints a number.
 * @n: number to be entered.
 * Return: Returns @n.
 */

void print_number(int n)
{
	int num_of_digits, temp, count, reversed, total_value, place_value, temp_2;
	char sign;

	if (n < 0)
	{
		sign = '-';
		n *= -1;
	}
	else
	{
		sign = '+';
	}

	num_of_digits, reversed = 0;
	temp = n;

	while ((temp /= 10) != 0)
	{
		++num_of_digits;
	}

	num_of_digits -= 1;
	temp = n;
	int x;

	place_value = 1;

	for (x = 0; x < (num_of_digits - 1); x++)
		place_value *= 10;

	for (count = 0; count < num_of_digits; count++)
	{
		temp_2 = temp % 10;
		temp /= 10;
		total_value = temp_2 * place_value;
		place_value /= 10;
		reversed += total_value;
	}

	if (sign == '-')
		_putchar('-');
	for (count = 0; count < num_of_digits; count++)
	{
		_putchar('0' + (reversed % 10));
		reversed /= 10;
	}

}
