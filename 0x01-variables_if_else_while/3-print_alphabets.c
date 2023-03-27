#include <stdio.h>

/*
 * main - Prints the lowercase and uppercase.
 *
 * Return: Always returns 0.
 */

int main(void)
{
	char x;

	for (x = 97; x < 123; x++)
	{
		putchar(x);
		if (x == 122)
			x = 64;
		else if (x == 90)
			break;
	}
	putchar('\n');

	return (0);

}

