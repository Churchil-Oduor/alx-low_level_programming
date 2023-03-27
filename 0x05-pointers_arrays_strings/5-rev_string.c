#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string entered to be reversed.
 * Return: void function.
 */

void rev_string(char *s)
{
	int c_chars, count;

	c_chars = -1;

	while (*(s + ++c_chars) != '\0');

	char hold[c_chars];
	count = c_chars;

	while (--count != 0)
		hold[count] = *(s + count);


	count = -1;

	while (++count != c_chars)
		*(s + count) = hold[count];



}
