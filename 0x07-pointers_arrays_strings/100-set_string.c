#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: double pointer that points to the address whose variable
 *  is to be changed.
 * @to: the value to replace the value at s.
 * Return: void function.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
