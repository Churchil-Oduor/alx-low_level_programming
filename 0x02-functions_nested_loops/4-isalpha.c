#include "main.h"

/**
 * _isalpha - checks if passed c is an alphabet letter
 * @c: is the parameter being passed
 * Return: returns 1 if true and 0 if false
 */

int _isalpha(int c)
{
	char chLower, chUpper;
	int check;


	for (chLower = 65 ; chLower < 91 ; chLower++)
	{
		chUpper = chLower + 32;

		if (c == chLower || c == chUpper)
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
