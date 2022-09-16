#include "main.h"

/**
 * _isupper - fx that checks if passed arg is uppercase character
 * @c: passed arg to fx _isupper
 * Return: returns 1 if arg is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char ch = c;
	int result;

	for (char i = 65 ; i < 91 ; i++)
	{
		if (i == ch)
		{
			result = 1;
			break;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
