#include <stdio.h>
#include "main.h"

/**
 * main - main function
 *
 * Return: Always returns 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints fizz for multiples of 3,
 * buzz for 5 and fizzbuzz for both 5 and 3.
 *
 * Return: void function
 */
void fizz_buzz(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);

		printf(" ");
	}
	printf("\n");
}
