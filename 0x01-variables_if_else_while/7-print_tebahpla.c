#include <stdio.h>
/*
 * main - Prints lowercase alphabet in reverse.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');

	return (0);
}
