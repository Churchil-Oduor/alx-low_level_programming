#include "main.h"

/**
 * _isdigit - fx that checks for a digit between 0 and 9
 * @c passed param
 * Return: Returns 1 if true and 0 is false
 */

int _isdigit(int c)
{
	char mychar, ch = c;
	int res;

	for (mychar = 48 ; mychar < 58 ; mychar++)
	{
		if (ch == mychar)
		{
			res = 1;
			break;
		}
		else
		{
			res = 0;
		}
	}
	return (res);
}
