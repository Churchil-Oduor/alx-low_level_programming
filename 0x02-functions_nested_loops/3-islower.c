#include "main.h"

/*
 * _islower - checks if alphabet entered is lowercase.
 * @c: is the alphabet to be checked
 * Return: returns 1 if @c is lowercase otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
