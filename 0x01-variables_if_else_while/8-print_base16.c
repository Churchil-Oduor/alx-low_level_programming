#include <stdio.h>
/*
 * main - Prints 0123456789abcdef followd by a new line.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	char x;
	
	for (x = 48; x < 58 ; x++)
	{
		putchar(x);
		if (x == 57)
		{
			int i;

			for (i = 97; i < 103; i++)
			{
				putchar(i);
			}
		}
	}
	putchar('\n');

	return (0);

}
