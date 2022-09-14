#include "main.h"

/**
 * _isalpha - checks if passed c is an alphabet letter
 * @c: is the parameter being passed
 * Return: returns 1 if true and 0 if false
 */

int _isalpha(int c)
{
	char char_lower, char_upper;
	int check;

	for (char_lower = 65 ; char_lower < 91 ; char_lower++)
	{
		char_lower = char_upper + 32;

		if (c == char_lower || c == char_upper)
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
