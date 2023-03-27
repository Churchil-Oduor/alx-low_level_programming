#include "main.h"

/*
 * _isdigit - checks for a digit 0 - 9
 * @c: Argument passed to be checked
 *
 * Return: returns 1 if a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
