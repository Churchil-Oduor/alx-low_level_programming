#include "main.h"

/**
 * _isalpha - checks if passed c is an alphabet letter
 * @c: is the parameter being passed
 * Return: returns 1 if true and 0 if false
 */

int _isalpha(int c)
{
	char charLower, charUpper;
	int check;

	for (charLower = 65 ; charLower < 91 ; charLower++)
	{
		charLower = charUpper + 32;

		if (c == charLower || c == charUpper)
		{
			check = 1;
			break;
		}
		else
		{
			check = 0;
		}
	}
	return (check);
}
