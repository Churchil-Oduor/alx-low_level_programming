#include "main.h"
/**
 * _isdigit - checks for a digit between 0 and 9.
 * @c: argument passed to be checked.
 * Return: Returns 1 if is a digit and 0, otherwise.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
