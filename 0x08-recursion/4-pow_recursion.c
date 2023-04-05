#include "main.h"

/**
 * _pow_recursion - returns the value of x
 *  raised to the power of y.
 *  @x: value whose power of y is to be determined.
 *  @y: power of x.
 *  Return: x raised to power y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}

}
