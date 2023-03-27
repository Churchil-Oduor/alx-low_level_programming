#include "main.h"

/*
 * _abs - computes the absolute value of an integer.
 * @i: value entered to be computed.
 * Return: returns the absolute value of entered number.
 */

int _abs(int i)
{
	if  (i < 0)
		return (-i);
	else
		return (i);
}
