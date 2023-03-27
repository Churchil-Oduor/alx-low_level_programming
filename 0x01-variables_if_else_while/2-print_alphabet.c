#include <stdio.h>
#include <stdlib.h>
/*
 * main - This function prints the letters
 *
 * Return: Always returns zero.
 */

int main(void)
{

	char x;

	x = 97;
	for (x = 97; x < 123; x++)
		putchar(x);

	putchar('\n');
	return (0);
}

