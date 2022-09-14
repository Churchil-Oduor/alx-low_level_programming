#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: returns zero
 */
int main(void)
{
	printChar();
	return (0);
}

/**
 * printChar - this is our function
 * Return: returns characters in lower case
 */
void printChar(void)
{
	for (int i = 97 ; i < 123 ; i++)
	{
		printf("%c", i);
	}
	printf("\n");
}
