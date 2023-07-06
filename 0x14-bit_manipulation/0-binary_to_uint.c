#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number to be converted to unsigned int.
 * Return: unsigned int value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_no, len, index;

	decimal_no = 0;
	index = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;

	while (b[index] != '\0')
	{
		if (b[index] == '1')
			decimal_no += _pow(2, len);
		else if (b[index] == '0')
			decimal_no += 0;
		else
			return (0);

		len--;
		index++;
	}

	return (decimal_no);

}


/**
 * _pow - fx that calculates power of a number.
 * @x: number to be powered.
 * @y: power.
 * Return: Power of the number.
 */

unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int res;

	res = 1;
	while (y)
	{
		res *= x;
		--y;
	}

	return (res);
}

/**
 * _strlen - gets the length of a string
 * @str: string fed to function _strlen
 * Return: length of @str
 */

unsigned int _strlen(const char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
