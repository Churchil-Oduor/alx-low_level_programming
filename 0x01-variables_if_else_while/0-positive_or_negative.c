#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - called whenevr the c program is executed
 * Return: Returns a zero when the program executes correctly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	else if (n > 0)
	{
		printf("%d", n);
		printf(" is positive\n");
	}
	else
	{
		printf("%d", n);
		printf(" is zero\n");
	}
	return (0);
}
