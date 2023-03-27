#include <stdio.h>
/*
 * main - Returns 0 - 9 separated by comma.
 *
 * Return: Always returns zero.
 */

int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);

		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
