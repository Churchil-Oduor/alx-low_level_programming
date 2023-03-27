#include <stdio.h>

/*
 * man - Prints 0 to 9 without using char.
 *
 * Return: Always returns zero
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
