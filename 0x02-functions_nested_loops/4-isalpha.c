#include "main.h"

/**
 * _isalpha - checks if passed c is an alphabet letter
 * Return: returns 1 if true and 0 if false
 */

int _isalpha(int c)
{
	char ch, charUpper;
	int check;

	for (ch = 65 ; ch < 91 ; ch++)
	{
		charUpper = ch + 32;

		if (c == ch || c == charUpper)
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
