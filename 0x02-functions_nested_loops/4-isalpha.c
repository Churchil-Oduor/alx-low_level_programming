#include "main.h"
/**
 * _isalpha - checks if entered value is a valid alphabet character.
 * @c: is the value entered to be checked.
 * Return: returns 1 if it is valid, otherwise returns zero.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
