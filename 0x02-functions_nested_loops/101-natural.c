#include <stdio.h>
#include "main.h"

/**
 * natural - computes sum of natural numbers.
 * @n: parameter entered.
 * Return: void type function
 */
void natural(int n)
{
	int sum, count;

	sum = 0;
	count = 0;

	while (n > ++count)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
}

/**
 * main - main function.
 * Return: void function.
 */
int main(void)
{
	natural(1024);
	return (0);
}
